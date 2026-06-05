/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:40:44 by jpedraza          #+#    #+#             */
/*   Updated: 2026/05/07 10:12:40 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total_size = (nmemb * size);
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return ;
}

int main (void)
{
	size_t	nmemb = 10;
	size_t	size = 5;
	char	*ptr;


	ptr = (char *)ft_calloc(nmemb, size);
	printf ("%s\n", ptr);
	free (ptr);
	return (0);
}
*/