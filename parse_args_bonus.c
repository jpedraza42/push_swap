/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:09:34 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/24 11:42:29 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	error_split_exit(t_stack **a, char **split)
{
	free_split(split);
	stack_clear(a);
	error_exit();
}

static void	add_number(t_stack **a, char *arg)
{
	long	num;

	if (!is_number(arg))
		error_free_exit(a);
	num = ft_atol(arg);
	if (num > 2147483647 || num < -2147483648)
		error_free_exit(a);
	stack_add_back(a, stack_new((int)num));
}

static void	parse_split_arg(t_stack **a, char *arg)
{
	char	**split;
	int		i;
	long	num;

	split = ft_split(arg, ' ');
	if (!split || !split[0])
	{
		if (split)
			free_split(split);
		error_free_exit(a);
	}
	i = 0;
	while (split[i])
	{
		if (!is_number(split[i]))
			error_split_exit(a, split);
		num = ft_atol(split[i]);
		if (num > 2147483647 || num < -2147483648)
			error_split_exit(a, split);
		stack_add_back(a, stack_new((int)num));
		i++;
	}
	free_split(split);
}

void	parse_args_bonus(t_stack **a, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strchr(argv[i], ' '))
			parse_split_arg(a, argv[i]);
		else
			add_number(a, argv[i]);
		i++;
	}
	if (has_duplicates(*a))
		error_free_exit(a);
}
