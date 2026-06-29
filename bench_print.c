/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:57:51 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/29 13:07:23 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bench_print_one(char *name, int value)
{
	ft_putstr_fd("[bench] ", 2);
	ft_putstr_fd(name, 2);
	ft_putstr_fd(": ", 2);
	ft_putnbr_fd(value, 2);
	ft_putstr_fd("\n", 2);
}

static void	bench_print_ops(t_bench *bench)
{
	bench_print_one("sa", bench->sa);
	bench_print_one("sb", bench->sb);
	bench_print_one("ss", bench->ss);
	bench_print_one("pa", bench->pa);
	bench_print_one("pb", bench->pb);
	bench_print_one("ra", bench->ra);
	bench_print_one("rb", bench->rb);
	bench_print_one("rr", bench->rr);
	bench_print_one("rra", bench->rra);
	bench_print_one("rrb", bench->rrb);
	bench_print_one("rrr", bench->rrr);
}

static void	bench_print_percent(double ratio)
{
	int	whole;
	int	decimals;

	whole = (int)(ratio * 100);
	decimals = (int)(ratio * 10000) % 100;
	ft_putnbr_fd(whole, 2);
	ft_putstr_fd(".", 2);
	if (decimals < 10)
		ft_putstr_fd("0", 2);
	ft_putnbr_fd(decimals, 2);
	ft_putstr_fd("%\n", 2);
}

static void	bench_print_disorder(t_bench *bench)
{
	ft_putstr_fd("[bench] disorder: ", 2);
	bench_print_percent(bench->disorder);
}

void	bench_print(t_bench *bench)
{
	if (!bench || !bench->enabled)
		return ;
	bench_print_disorder(bench);
	if (bench->strategy)
	{
		ft_putstr_fd("[bench] strategy: ", 2);
		ft_putstr_fd(bench->strategy, 2);
		ft_putstr_fd("\n", 2);
	}
	if (bench->complexity)
	{
		ft_putstr_fd("[bench] complexity: ", 2);
		ft_putstr_fd(bench->complexity, 2);
		ft_putstr_fd("\n", 2);
	}
	bench_print_one("operations", bench->total);
	bench_print_ops(bench);
}
