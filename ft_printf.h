/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:33:21 by yismaail          #+#    #+#             */
/*   Updated: 2022/11/07 14:34:19 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putstr(const char *s, int *index);
void	ft_putchar(char c, int *index);
void	ft_putnbr(int n, int *index);
void	ft_putnbr_u(unsigned int n, int *index);
void	ft_putnbr_hexa(unsigned int n, char type, int *index);
void	ft_print_pointer(unsigned long int n, int *index);
void	ft_memory(const void *ptr, int *index);

#endif