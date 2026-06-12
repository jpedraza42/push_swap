/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:28:34 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 11:52:26 by jpedraza         ###   ########.fr       */
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

void	bring_max_to_top(t_stack **b, t_bench *bench)
{
	t_stack	*max;

	max = stack_max_index_node(*b);
	while (*b != max)
	{
		if (is_top_half(*b, max))
			rb(b, bench);
		else
			rrb(b, bench);
	}
}

t_stack	*stack_max_index_node(t_stack *stack)
{
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max_node = stack;
	while (stack)
	{
		if (stack->index > max_node->index)
			max_node = stack;
		stack = stack->next;
	}
	return (max_node);
}

int	get_chunk_size(int size)
{
	if (size <= 100)
		return (20);
	return (45);
}

t_stack	*find_next_index_under(t_stack *stack, int limit)
{
	while (stack)
	{
		if (stack->index <= limit)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
