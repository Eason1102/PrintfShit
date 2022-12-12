/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:25:54 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:17:51 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(va_list arg_list, int *len)
{
	unsigned long	p;

	p = va_arg(arg_list, unsigned long);
	ft_putchar_len('0', len);
	ft_putchar_len('x', len);
	ft_putnbr_pointer_len(p, len);
}
