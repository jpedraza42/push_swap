/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:38:04 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 13:48:32 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*ptr;
	char			crt;

	ptr = (unsigned char *)s;
	crt = (char)c;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)crt)
			return ((char *)&ptr[i]);
		i++;
	}
	if (crt == '\0')
		return ((char *)&ptr[i]);
	return (0);
}
/*
int	main (void)
{
	char	s[] = "El perro de san roque";
	int		c = 'r';

	printf ("%s\n", ft_strchr (s, c));
	printf ("%s\n", strchr (s, c));
	return (0);
}
	*/