/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:30:11 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/10 12:34:21 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_sort(t_stack **a, t_stack **b)
{
	int	size;
	int	chunk_size;
	int	limit;

	size = stack_size(*a);
	if (size <= 100)
		chunk_size = 20;
	else
		chunk_size = 35;
	limit = chunk_size - 1;
	while (*a)
	{
		push_chunk(a, b, &limit, chunk_size);
		if (!has_index_under(*a, limit))
			limit += chunk_size;
	}
	restore_stack(a, b);
}

