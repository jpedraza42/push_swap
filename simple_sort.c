/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:40:18 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/11 10:40:57 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_min_to_top(t_stack **a)
{
	t_stack	*min;

	min = stack_min_node(*a);
	while (*a != min)
	{
		if (is_top_half(*a, min))
			ra(a);
		else
			rra(a);
	}
}
void	simple_sort(t_stack **a, t_stack **b)
{
	while (*a)
	{
		move_min_to_top(a);
		pb(a, b);
	}
	while (*b)
		pa(a, b);
}