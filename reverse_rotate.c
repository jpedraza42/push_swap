/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 11:55:41 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/10 18:38:18 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	reverse_rotate_stack(t_stack **stack)
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

void	rra(t_stack **a)
{
	reverse_rotate_stack(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate_stack(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
	ft_printf("rrr\n");
}
