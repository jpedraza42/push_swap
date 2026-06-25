/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 09:43:41 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/03 17:00:55 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_selec(char c, va_list vargs)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(vargs, int));
	else if (c == 's')
		len = ft_putstr(va_arg(vargs, char *));
	else if (c == 'p')
		len = ft_putptr(va_arg(vargs, void *));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(vargs, int));
	else if (c == 'u')
		len = ft_putunbr(va_arg(vargs, unsigned int));
	else if (c == 'x' || c == 'X')
		len = ft_puthex(va_arg(vargs, unsigned int), c);
	else if (c == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	vargs;
	int		i;
	int		total_len;

	total_len = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(vargs, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			total_len += ft_selec(format[i], vargs);
		}
		else
		{
			total_len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(vargs);
	return (total_len);
}
/*
int main(void)
{
	ft_printf("Hola %s\n", "Mundo");
	ft_printf("len: %d\n", ft_printf("Nested: %d %s\n", 123, "ok"));
	ft_printf("char: %c\n", 'A');
	ft_printf("decimal: %d %i\n", 42, -42);
	ft_printf("unsigned: %u\n", 3000000000u);
	ft_printf("hex minusculas: %x\n", 305441741);
	ft_printf("hex mayusculas: %X\n", 305441741);
	ft_printf("puntero: %p\n", (void *)main);
	ft_printf("porcentaje: %%\n");
	return 0;
}
*/