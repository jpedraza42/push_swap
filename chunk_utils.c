/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:28:34 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/10 12:29:40 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_index_under(t_stack *stack, int limit)
{
	while (stack)
	{
		if (stack->index <= limit)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	bring_max_to_top(t_stack **b)
{
	t_stack	*max;

	max = stack_max_node(*b);
	while (*b != max)
	{
		if (is_top_half(*b, max))
			rb(b);
		else
			rrb(b);
	}
}

