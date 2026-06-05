/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 12:22:41 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/05 16:12:59 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_min(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	stack_max(t_stack *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->value;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

t_stack	*stack_min_node(t_stack *stack)
{
	t_stack	*min_node;

	if (!stack)
		return (NULL);
	min_node = stack;
	while (stack)
	{
		if (stack->value < min_node->value)
			min_node = stack;
		stack = stack->next;
	}
	return (min_node);
}

t_stack	*stack_max_node(t_stack *stack)
{
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max_node = stack;
	while (stack)
	{
		if (stack->value > max_node->value)
			max_node = stack;
		stack = stack->next;
	}
	return (max_node);
}
