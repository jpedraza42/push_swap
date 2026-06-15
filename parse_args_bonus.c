/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:09:34 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 20:10:20 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_args_bonus(t_stack **a, char **argv)
{
	int		i;
	long	num;

	i = 1;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			error_exit();
		num = ft_atol(argv[i]);
		if (num > 2147483647 || num < -2147483648)
			error_exit();
		stack_add_back(a, stack_new((int)num));
		i++;
	}
	if (has_duplicates(*a))
		error_exit();
}
