/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 10:58:27 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 11:45:32 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_stack(t_stack **stack)
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

void	sa(t_stack **a, t_bench *bench)
{
	swap_stack(a);
	bench_count(bench, "sa");
	ft_printf("sa\n");
}

void	sb(t_stack **b, t_bench *bench)
{
	swap_stack(b);
	bench_count(bench, "sb");
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, t_bench *bench)
{
	swap_stack(a);
	swap_stack(b);
	bench_count(bench, "ss");
	ft_printf("ss\n");
}
