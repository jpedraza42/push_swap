/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:52:25 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/29 13:08:48 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_ops(char *op, t_bench *bench)
{
	if (!bench)
		return ;
	ft_putstr_fd(op, 1);
	ft_putchar_fd('\n', 1);
}

void	bench_print_total(t_bench *bench)
{
	if (!bench)
		return ;
	ft_putnbr_fd(bench->total, 1);
	ft_putchar_fd('\n', 1);
}
