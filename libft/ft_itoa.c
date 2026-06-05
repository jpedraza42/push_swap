/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:41:08 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/30 13:33:52 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_n(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*ptr;
	int		len;
	int		is_negative;

	num = n;
	len = ft_count_n(num);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	is_negative = (num < 0);
	if (is_negative)
	{
		ptr[0] = '-';
		num = -num;
	}
	while (len-- > is_negative)
	{
		ptr[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	n;

	n = 42;
	printf ("%s\n", ft_itoa(n));
	return (0);
}
*/