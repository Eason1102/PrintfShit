/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:27:41 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:17:58 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_small_x(va_list arg_list, int *len)
{
	unsigned int	x;

	x = va_arg(arg_list, unsigned int);
	ft_putnbr_hex_lower_len(x, len);
}

void	ft_printf_big_x(va_list arg_list, int *len)
{
	unsigned int	x;

	x = va_arg(arg_list, unsigned int);
	ft_putnbr_hex_upper_len(x, len);
}
