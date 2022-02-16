/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:35:05 by fiselann          #+#    #+#             */
/*   Updated: 2022/02/16 13:36:12 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include<stdarg.h>

int	ft_putchar(char c);
int	ft_puthex(size_t nbr, char *base, int len);
int	ft_putptr(size_t nbr, int len);
int	ft_putstr(char *str);
int	ft_putui(unsigned long int nbr, int len);
int	ft_strchr(char *str, char c);
int	ft_strlen(char *str);
int	ft_putnbr(long int nbr, int len);
int	ft_parse(va_list buffer, char tag);
int	ft_printf(const char *format, ...);
#endif
