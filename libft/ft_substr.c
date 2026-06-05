/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:27:49 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 19:05:17 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	lng_s;

	if (!s)
		return (NULL);
	lng_s = 0;
	while (s[lng_s])
		lng_s++;
	if (start >= lng_s)
		len = 0;
	if ((lng_s - start) < len)
		len = (lng_s - start);
	ptr = (char *)malloc (sizeof (char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && start < lng_s)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main (void)
{
	char *ptr;
	char			s[] = "Esta es la prueba 42.";
	unsigned int	start = 8;
	size_t			len = 13;

	ptr = ft_substr (s, start, len);
	printf ("%s\n", ptr);
	free (ptr);
	return (0);
}
*/