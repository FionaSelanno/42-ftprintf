/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:39:43 by fiselann          #+#    #+#             */
/*   Updated: 2022/02/16 15:33:43 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_parse(va_list buffer, char tag)
{
	if (tag == 'c')
		return (ft_putchar(va_arg(buffer, int)));
	else if (tag == '%')
		return (ft_putchar('%'));
	else if (tag == 's')
		return (ft_putstr(va_arg(buffer, char *)));
	else if (tag == 'd' || tag == 'i')
		return (ft_putnbr(va_arg(buffer, int), 0));
	else if (tag == 'u')
		return (ft_putui(va_arg(buffer, unsigned int), 0));
	else if (tag == 'p')
		return (ft_putptr(va_arg(buffer, size_t), 0));
	else if (tag == 'x')
		return (ft_puthex(va_arg(buffer, unsigned int), "0123456789abcdef", 0));
	else if (tag == 'X')
		return (ft_puthex(va_arg(buffer, unsigned int), "0123456789ABCDEF", 0));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	buffer;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(buffer, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += ft_putchar(format[i]);
		else if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[i + 1]) != 0)
			{
				len += ft_parse(buffer, format[i + 1]);
				i++;
			}
		}
		i++;
	}
	va_end(buffer);
	return (len);
}
/*int main(void)
{
	int i = 5;
	int *ptr = &i;
	char *s = NULL;

	printf("return value MINE: %d\n", ft_printf("MINE | empty string: %s, other string: %s\n", s, "test"));
	printf("return value OR: %d\n", printf("OR | empty string: %s, other string: %s\n", s, "test"));
	printf("return value MINE: %d\n", ft_printf("MINE | big number: %d, another: %d\n", -2147483647, 9223372));
	printf("return value OR: %d\n", printf("OR | big number: %d, another: %d\n", -2147483647, 9223372));
	printf("return value MINE: %d\n", ft_printf("\nMINE | unsigned int: %u\n", 2147483647));
	printf("return value OR: %d\n", printf("OR | unsigned int: %u\n", 2147483647));
	printf("return value MINE: %d\n", ft_printf("\nMINE | hex: %x\n", -214748364));
	printf("return value OR: %d\n", printf("OR | hex:  %x\n", -214748364));
	printf("return value MINE: %d\n", ft_printf("\nMINE | hexCapt: %X\n", 217));
	printf("return value OR: %d\n", printf("OR | hexCapt: %X\n", 217));
	printf("return value MINE %d\n", ft_printf("\nMINE | ptr: %p\n", ptr));
	printf("return value OR: %d\n", printf("OR | ptr: %p\n", ptr));
	return (0);
}
*/
