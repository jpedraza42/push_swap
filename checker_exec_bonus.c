/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_exec_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:30:19 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/15 11:10:31 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	checker_exec_swap_push(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(line, "sa\n", 3))
		sa_checker(a);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb_checker(b);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss_checker(a, b);
	else if (!ft_strncmp(line, "pa\n", 3))
		pa_checker(a, b);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb_checker(a, b);
	else
		return (0);
	return (1);
}

static int	checker_exec_rotate(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(line, "rra\n", 4))
		rra_checker(a);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb_checker(b);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr_checker(a, b);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra_checker(a);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb_checker(b);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr_checker(a, b);
	else
		return (0);
	return (1);
}

int	checker_exec(char *line, t_stack **a, t_stack **b)
{
	if (checker_exec_swap_push(line, a, b))
		return (1);
	if (checker_exec_rotate(line, a, b))
		return (1);
	return (0);
}
