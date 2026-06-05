/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:42:31 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/29 11:23:41 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	rslt;
	int	i;
	int	sig;

	i = 0;
	sig = 1;
	rslt = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sig = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = rslt * 10 + (nptr[i] - '0');
		i++;
	}
	return (rslt * sig);
}
/*
int	main(void)
{
	char	nptr[] = "       	  	42";
	printf	("FT_ATOI: %d\n", ft_atoi(nptr));
	printf	("   ATOI: %d\n", atoi(nptr));
	return (0);
}
*/