/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:31:53 by fiselann          #+#    #+#             */
/*   Updated: 2022/02/16 13:32:00 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strchr(char *str, char c)
{
	int	len;

	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	if (c == '\0' && *str == c)
	{
		return (1);
	}
	return (0);
}

int	ft_putptr(size_t nbr, int len)
{
	len += ft_putstr("0x");
	len = ft_puthex(nbr, "0123456789abcdef", len);
	return (len);
}
