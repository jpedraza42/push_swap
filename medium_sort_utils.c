/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:33:08 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/11 17:19:57 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_chunk(t_stack **a, t_stack **b,
			int *limit, int chunk_size)
{
	if ((*a)->index <= *limit)
	{
		pb(a, b);
		if (*b && (*b)->index < *limit - (chunk_size / 2))
			rb(b);
	}
	else
		ra(a);
}

static void	restore_stack(t_stack **a, t_stack **b)
{
	while (*b)
	{
		bring_max_to_top(b);
		pa(a, b);
	}
}
