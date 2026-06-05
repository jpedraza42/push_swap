/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:25:49 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/05 12:21:29 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	stack_size(t_stack *stack)
{
	int	ct;

	ct = 0;
	while (stack)
	{
		ct++;
		stack = stack->next;
	}
	return (ct);
}

void	stack_clear(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

int	stack_is_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	stack_print(t_stack *stack)
{
	while (stack)
	{
		ft_printf("[%d]", stack->value);
		if (stack->next)
			ft_printf(" -> ");
		stack = stack->next;
	}
	ft_printf(" -> NULL\n");
}
