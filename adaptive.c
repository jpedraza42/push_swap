/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:29:00 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/17 18:33:25 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_inversions(t_stack *a)
{
	int			count;
	t_stack		*current;
	t_stack		*runner;

	count = 0;
	current = a;
	while (current)
	{
		runner = current->next;
		while (runner)
		{
			if (current->value > runner->value)
				count++;
			runner = runner->next;
		}
		current = current->next;
	}
	return (count);
}

double	disorder_ratio(t_stack *a)
{
	int		size;
	int		inversions;
	double	pairs;

	size = stack_size(a);
	if (size <= 1)
		return (0.0);
	inversions = count_inversions(a);
	pairs = (double)(size * (size - 1)) / 2;
	return ((double)inversions / pairs);
}

static void	set_bench_strategy(t_bench *bench, char *strategy,
		char *complexity)
{
	bench->strategy = strategy;
	bench->complexity = complexity;
}

static void	run_simple(t_stack **a, t_stack **b, t_bench *bench)
{
	set_bench_strategy(bench, "Adaptive -> Simple", "O(n^2)");
	simple_sort(a, b, bench);
}

void	adaptive_sort(t_stack **a, t_stack **b, t_bench *bench)
{
	double	ratio;

	if (stack_size(*a) <= 5)
	{
		run_simple(a, b, bench);
		return ;
	}
	ratio = disorder_ratio(*a);
	if (ratio < 0.2)
		run_simple(a, b, bench);
	else if (ratio < 0.5)
	{
		set_bench_strategy(bench, "Adaptive -> Medium", "O(n*sqrt(n))");
		chunk_sort(a, b, bench);
	}
	else
	{
		set_bench_strategy(bench, "Adaptive -> Complex", "O(n log n)");
		radix_sort(a, b, bench);
	}
}
