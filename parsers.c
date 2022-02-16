/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:32:14 by fiselann          #+#    #+#             */
/*   Updated: 2022/02/16 13:32:19 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		len = 6;
	}
	else
	{
		len = ft_strlen(str);
		write(1, str, len);
	}
	return (len);
}

int	ft_putnbr(long int nbr, int len)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		len++;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		len = ft_putnbr((nbr / 10), len);
		len = ft_putnbr((nbr % 10), len);
	}
	else
	{
		ft_putchar(nbr + '0');
		len++;
	}
	return (len);
}	

int	ft_putui(unsigned long int nbr, int len)
{
	if (nbr >= 10)
	{
		len = ft_putui((nbr / 10), len);
		len = ft_putui((nbr % 10), len);
	}
	else
	{
		ft_putchar(nbr + '0');
		len++;
	}
	return (len);
}

int	ft_puthex(size_t nbr, char *base, int len)
{
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	while (nbr >= 16)
	{
		len = ft_puthex((nbr / 16), base, len);
		nbr %= 16;
	}
	if (nbr < 16)
	{
		ft_putchar(base[nbr]);
		len++;
	}
	return (len);
}
