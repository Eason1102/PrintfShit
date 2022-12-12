/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:26:58 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:17:50 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_i(va_list arg_list, int *len)
{
	int	i;

	i = va_arg(arg_list, int);
	ft_putnbr_int_len(i, len);
}
