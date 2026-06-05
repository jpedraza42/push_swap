/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:38:59 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/30 19:16:17 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (dest == src || n == 0)
		return (dest);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s && d < s + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;
	unsigned char		*dest2;

	if (n == 0)
		return (dest);
	src2 = (const unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
int	main(void)
{
	char	dest[] = "Esto es ";
	char	src[] = "una prueba.";
	size_t	n = 5;

	printf ("FT_MEMMOVE: %s\n", (char *)ft_memmove (dest, src, n));
	printf ("   MEMMOVE: %s\n", (char *)memmove (dest, src, n));
	return (0);
}
*/