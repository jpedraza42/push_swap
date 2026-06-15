/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:38:10 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 19:38:29 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_stack_checker(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !(stack) || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa_checker(t_stack **a)
{
	swap_stack_checker(a);
}

void	sb_checker(t_stack **b)
{
	swap_stack_checker(b);
}

void	ss_checker(t_stack **a, t_stack **b)
{
	swap_stack_checker(a);
	swap_stack_checker(b);
}
