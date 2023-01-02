/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:10:36 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 14:36:22 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	ft_format(va_list args, const char s, int *index)
{
	if (s == '%')
		ft_putchar('%', index);
	else if (s == 'c')
		ft_putchar(va_arg(args, int), index);
	else if (s == 's')
		ft_putstr(va_arg(args, char *), index);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(args, int), index);
	else if (s == 'x' || s == 'X')
		ft_putnbr_hexa(va_arg(args, unsigned int), s, index);
	else if (s == 'u')
		ft_putnbr_u(va_arg(args, int), index);
	else if (s == 'p')
		ft_memory(va_arg(args, const void *), index);
	
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_format(args, str[i], &count);
		}
		else 
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
