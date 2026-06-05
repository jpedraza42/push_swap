/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:26:17 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 16:58:43 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main (void)
{
	char	dst[] = "Esto es ";
	char	src[] = "una prueba.";
	size_t	size = 25;

	printf ("ft_strlcat: %zu\n", ft_strlcat (dst, src, size));
	return (0);
}
*/