/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:46:25 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 16:29:30 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		while (size - 1 > 0 && *src != '\0')
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (i);
}
/*
int	main (void)
{
	char	dest[20];
	char	src[] = "Esto es una prueba.";
	size_t	size = sizeof(dest);

	printf ("FT_STRLCPY: %zu\n", ft_strlcpy (dest, src, size));
	printf ("      DEST: %s\n", dest);
	return (0);
}
*/