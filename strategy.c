/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:03:42 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 18:56:13 by jpedraza         ###   ########.fr       */
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

void	execute_strategy(t_strategy strategy, t_stack **a, t_stack **b,
		t_bench *bench)
{
	if (stack_is_sorted(*a))
	{
		bench->strategy = "Already sorted";
		bench->complexity = "O(1)";
		return ;
	}
	if (strategy == SIMPLE)
	{
		bench->strategy = "Simple";
		bench->complexity = "O(n^2)";
		simple_sort(a, b, bench);
	}
	else if (strategy == MEDIUM)
	{
		bench->strategy = "Medium";
		bench->complexity = "O(n*sqrt(n))";
		chunk_sort(a, b, bench);
	}
	else if (strategy == COMPLEX)
	{
		bench->strategy = "Complex";
		bench->complexity = "O(n log n)";
		radix_sort(a, b, bench);
	}
	else
		adaptive_sort(a, b, bench);
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
