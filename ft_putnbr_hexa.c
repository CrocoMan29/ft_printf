/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:54:15 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 14:08:18 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned int n, char type, int *index)
{
	if (n > 16)
	{
		ft_putnbr_hexa(n / 16, type, index);
		ft_putnbr_hexa(n % 16, type, index);
	}
	else if (n < 10)
		ft_putchar(n + '0', index);
	else
	{
		if (type == 'x')
			ft_putchar(n - 10 + 'a', index);
		else if (type == 'X')
			ft_putchar(n - 10 + 'A', index);
	}
}