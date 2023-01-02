/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:17:34 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 09:12:59 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *index)
{
	int	i;

	if (!s)
		ft_putstr("(null)", index);
	else
	{
		i = 0;
		while (s[i])
			ft_putchar(s[i++], index);
	}
}
