/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:58:52 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 15:10:22 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_pointer(unsigned long int n, int *index)
{
	if (i >= 16)
	{
		ft_printf_pointer(n / 16, index);
		ft_printf_pointer(n % 16, index);
	}
	else if (n < 10)
		ft_putchar(n + '0', index);
	else
		ft_putchar (n - 10 + 'a', index);
}

void	ft_memory(const void *ptr, int *index)
{
	unsigned long int	adress;
	
	adress = (unsigned long int)ptr;
	ft_putstr("0x", index);
	ft_print_pointer(adress, index);
}