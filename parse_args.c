/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:44:07 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/18 11:20:07 by jpedraza         ###   ########.fr       */
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

void	parse_args(t_stack **a, char **argv, int start)
{
	int	i;

	i = start;
	while (argv[i])
	{
		if (is_strategy_arg(argv[i]) || is_bench_arg(argv[i]))
		{
			i++;
			continue ;
		}
		if (ft_strchr(argv[i], ' '))
			parse_split_arg(a, argv[i]);
		else
			add_number(a, argv[i]);
		i++;
	}
	if (has_duplicates(*a))
		error_exit();
}
