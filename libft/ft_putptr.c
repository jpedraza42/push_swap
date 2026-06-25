/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:22:34 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/03 17:02:40 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int				len;

	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (unsigned long)ptr;
	len += ft_putstr("0x");
	len += ft_putptrhex(addr);
	return (len);
}
