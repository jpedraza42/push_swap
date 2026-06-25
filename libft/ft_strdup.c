/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:04:17 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 18:58:41 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc (sizeof (char) * (i +1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s[] = "La prueba de 42.";
	char	*ptr;

	ptr = ft_strdup (s);
	printf ("%s\n", ptr);
	free (ptr);
	return (0);
}
*/