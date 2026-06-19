/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:40:18 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/19 10:54:02 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack **a, t_bench *bench)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a, bench);
	else if (first > second && second > third)
	{
		sa(a, bench);
		rra(a, bench);
	}
	else if (first > second && second < third && first > third)
		ra(a, bench);
	else if (first < second && second > third && first < third)
	{
		sa(a, bench);
		ra(a, bench);
	}
	else if (first < second && second > third && first > third)
		rra(a, bench);
}

static void	push_min_to_b(t_stack **a, t_stack **b, t_bench *bench)
{
	t_stack	*min;

	min = stack_min_node(*a);
	while (*a != min)
	{
		if (is_top_half(*a, min))
			ra(a, bench);
		else
			rra(a, bench);
	}
	pb(a, b, bench);
}

void	simple_sort(t_stack **a, t_stack **b, t_bench *bench)
{
	int	size;

	size = stack_size(*a);
	if (size <= 1)
		return ;
	if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a, bench);
		return ;
	}
	while (stack_size(*a) > 3)
		push_min_to_b(a, b, bench);
	sort_three(a, bench);
	while (*b)
		pa(a, b, bench);
}
