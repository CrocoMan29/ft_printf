/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:28:23 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 14:33:24 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *index)
{
	if (n > 9)
	{
		ft_putnbr_u(n / 10, index);
		ft_putnbr_u(n % 10, index);
	}
	else
	{
		ft_putchar(n + 48,index);
	}
}