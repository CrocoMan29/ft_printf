/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:19:39 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 11:54:26 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *index)
{
	long nb;

	nb = (long)n;
	// if(nb < 0)
	// {
	// 	write(1, "-", 1);
	// 	*index += 1;
	// 	nb = -nb;
	// }
	// if(nb < 10)
	// {
	// 	ft_putchar(nb + '0', index);
	// }
	// else
	// {
	// 	ft_putnbr(nb / 10, index);
	// 	ft_putnbr(nb % 10, index);
	// }
	
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, index);
	ft_putchar(nb % 10 + 48, index);
	
	//nbr = nb;
	// if (nbr < 0)
	// {
	// 	ft_putchar('-', index);
	// 	*index += 1;
	// 	nbr *= -1;
	// }
	// if (nbr > 9)
	// {
	// 	ft_putnbr(nbr / 10, index);
	// 	ft_putchar(nbr % 10 + 48, index);
	// }
	// if (nbr >= 0 && nbr <= 9)
	// 	ft_putchar(nbr + 48);
}