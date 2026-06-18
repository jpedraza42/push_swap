/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:09:34 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/17 12:18:59 by jpedraza         ###   ########.fr       */
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

static void	add_number(t_stack **a, char *arg)
{
	long	num;

	if (!is_number(arg))
		error_exit();
	num = ft_atol(arg);
	if (num > 2147483647 || num < -2147483648)
		error_exit();
	stack_add_back(a, stack_new((int)num));
}

static void	parse_split_arg(t_stack **a, char *arg)
{
	char	**split;
	int		i;

	split = ft_split(arg, ' ');
	if (!split || !split[0])
		error_exit();
	i = 0;
	while (split[i])
	{
		add_number(a, split[i]);
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
		error_exit();
}
