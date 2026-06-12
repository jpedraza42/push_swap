/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:44:07 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 10:29:46 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_args(t_stack **a, char **argv, int start)
{
	int		i;
	long	num;

	i = start;
	while (argv[i])
	{
		if (is_strategy_arg(argv[i]) || is_bench_arg(argv[i]))
		{
			i++;
			continue ;
		}
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

int	has_duplicates(t_stack *stack)
{
	t_stack	*current;
	t_stack	*runner;

	current = stack;
	while (current)
	{
		runner = current->next;
		while (runner)
		{
			if (current->value == runner->value)
				return (1);
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}
