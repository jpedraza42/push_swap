/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_exec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:00:00 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/18 11:23:42 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	run_simple(t_stack **a, t_stack **b, t_bench *bench)
{
	bench->strategy = "Simple";
	bench->complexity = "O(n^2)";
	simple_sort(a, b, bench);
}

static void	run_medium(t_stack **a, t_stack **b, t_bench *bench)
{
	bench->strategy = "Medium";
	bench->complexity = "O(n*sqrt(n))";
	chunk_sort(a, b, bench);
}

static void	run_complex(t_stack **a, t_stack **b, t_bench *bench)
{
	bench->strategy = "Complex";
	bench->complexity = "O(n log n)";
	radix_sort(a, b, bench);
}

static void	run_strategy(t_strategy strategy, t_stack **a, t_stack **b,
	t_bench *bench)
{
	if (strategy == SIMPLE)
		run_simple(a, b, bench);
	else if (strategy == MEDIUM)
		run_medium(a, b, bench);
	else if (strategy == COMPLEX)
		run_complex(a, b, bench);
	else
		adaptive_sort(a, b, bench);
}

void	execute_strategy(t_strategy strategy, t_stack **a, t_stack **b,
	t_bench *bench)
{
	if (stack_is_sorted(*a))
	{
		bench->strategy = "Already sorted";
		bench->complexity = "O(1)";
		return ;
	}
	run_strategy(strategy, a, b, bench);
}
