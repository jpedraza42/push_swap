/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:20:51 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/11 17:15:58 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*find_min_unindexed(t_stack *stack)
{
	t_stack	*min;

	min = NULL;
	while (stack)
	{
		if (stack->index == -1 && (!min || stack->value < min->value))
			min = stack;
		stack = stack->next;
	}
	return (min);
}

void	assign_indexes(t_stack *stack)
{
	t_stack	*min;
	int		index;

	index = 0;
	min = find_min_unindexed(stack);
	while (min)
	{
		min->index = index;
		index++;
		min = find_min_unindexed(stack);
	}
}
