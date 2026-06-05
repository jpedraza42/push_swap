/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:46:07 by jpedraza          #+#    #+#             */
/*   Updated: 2026/05/01 12:54:39 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	big[] = "Esto es la prueba de 42.";
	const char	little[] = "la prueba de ";
	size_t		len = 21;
	char		*rstd;

	rstd = ft_strnstr (big, little, len);
	printf ("%s\n", rstd);
	return (0);
}
*/