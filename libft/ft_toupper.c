/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:31:21 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 10:51:07 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 112;
	printf ("%d\n", ft_toupper (c));
	printf ("%d\n", toupper (c));
	return (0);
}
*/