/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:56:23 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/28 10:18:43 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ptr = malloc(sizeof (char) * (ls1 + ls2 + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ls1);
	ft_memcpy(ptr + ls1, s2, ls2);
	ptr[ls1 + ls2] = '\0';
	return (ptr);
}
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	if (!dest && !src)
		return (NULL);
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main (void)
{
	char	s1[] = "Esto es ";
	char	s2[] = "la prueba de 42.";
	char	*ptr;

	ptr = ft_strjoin(s1, s2);
	printf ("%s\n", ptr);
	free (ptr);
	return (0);
}
*/