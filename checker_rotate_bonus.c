/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:42:29 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 19:42:45 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_stack_checker(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = stack_last(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra_checker(t_stack **a)
{
	rotate_stack_checker(a);
}

void	rb_checker(t_stack **b)
{
	rotate_stack_checker(b);
}

void	rr_checker(t_stack **a, t_stack **b)
{
	rotate_stack_checker(a);
	rotate_stack_checker(b);
}
