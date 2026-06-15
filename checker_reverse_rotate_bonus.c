/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_reverse_rotate_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:47:22 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 19:47:33 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate_stack_checker(t_stack **stack)
{
	t_stack	*before_last;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	before_last = *stack;
	while (before_last->next->next)
		before_last = before_last->next;
	last = before_last->next;
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra_checker(t_stack **a)
{
	reverse_rotate_stack_checker(a);
}

void	rrb_checker(t_stack **b)
{
	reverse_rotate_stack_checker(b);
}

void	rrr_checker(t_stack **a, t_stack **b)
{
	reverse_rotate_stack_checker(a);
	reverse_rotate_stack_checker(b);
}
