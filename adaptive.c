/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:29:00 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 18:52:22 by jpedraza         ###   ########.fr       */
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

void	adaptive_sort(t_stack **a, t_stack **b, t_bench *bench)
{
	double	ratio;

	ratio = disorder_ratio(*a);
	if (stack_is_sorted(*a))
		return ;
	if (ratio < 0.2)
	{
		bench->strategy = "Adaptive -> Simple";
		bench->complexity = "O(n^2)";
		simple_sort(a, b, bench);
	}
	else if (ratio < 0.5)
	{
		bench->strategy = "Adaptive -> Medium";
		bench->complexity = "O(n*sqrt(n))";
		chunk_sort(a, b, bench);
	}
	else
	{
		bench->strategy = "Adaptive -> Complex";
		bench->complexity = "O(n log n)";
		radix_sort(a, b, bench);
	}
}
