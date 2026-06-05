/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:45:44 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/05 12:18:10 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	(void)argc;
	a = NULL;
	b = NULL;

	init_stack(&a, argv);

	ft_printf("A: ");
	stack_print(a);

	ft_printf("B: ");
	stack_print(b);

	/* probar operación aquí */

	ft_printf("\nResultado:\n");

	ft_printf("A: ");
	stack_print(a);

	ft_printf("B: ");
	stack_print(b);

	stack_clear(&a);
	stack_clear(&b);
	return (0);
}