/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:40:18 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 18:51:30 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_min_to_top(t_stack **a, t_bench *bench)
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
}

void	simple_sort(t_stack **a, t_stack **b, t_bench *bench)
{
	if (stack_size(*a) <= 1)
		return ;
	if (stack_size(*a) == 2)
	{
		sa(a, bench);
		return ;
	}
	while (*a)
	{
		move_min_to_top(a, bench);
		pb(a, b, bench);
	}
	while (*b)
		pa(a, b, bench);
}
