/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:03:42 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/18 11:28:28 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_strategy_arg(char *arg)
{
	if (!arg)
		return (0);
	if (!ft_strncmp(arg, "--simple", 9))
		return (1);
	if (!ft_strncmp(arg, "--medium", 9))
		return (1);
	if (!ft_strncmp(arg, "--complex", 10))
		return (1);
	if (!ft_strncmp(arg, "--adaptive", 11))
		return (1);
	return (0);
}

t_strategy	get_strategy(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!ft_strncmp(argv[i], "--simple", 9))
			return (SIMPLE);
		if (!ft_strncmp(argv[i], "--medium", 9))
			return (MEDIUM);
		if (!ft_strncmp(argv[i], "--complex", 10))
			return (COMPLEX);
		if (!ft_strncmp(argv[i], "--adaptive", 11))
			return (ADAPTIVE);
		i++;
	}
	return (ADAPTIVE);
}

int	args_start(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] && (is_strategy_arg(argv[i]) || is_bench_arg(argv[i])))
		i++;
	return (i);
}

int	has_bench(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (is_bench_arg(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
