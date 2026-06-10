/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:14:42 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/09 10:51:44 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_position(t_stack *stack, t_stack *target)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack == target)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}

int	stack_min_position(t_stack *stack)
{
	return (stack_position(stack, stack_min_node(stack)));
}

int	stack_max_position(t_stack *stack)
{
	return (stack_position(stack, stack_max_node(stack)));
}

int	is_top_half(t_stack *stack, t_stack *node)
{
	int	position;
	int	size;

	if (!stack || !node)
		return (0);
	position = stack_position(stack, node);
	size = stack_size (stack);
	if (position <= size / 2)
		return (1);
	return (0);
}
