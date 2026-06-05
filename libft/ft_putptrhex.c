/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:10:02 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/03 17:02:49 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptrhex(unsigned long n)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_putptrhex(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
