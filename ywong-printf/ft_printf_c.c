/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:24:33 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:17:45 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(va_list arg_list, int *len)
{
	char	c;

	c = va_arg(arg_list, int);
	ft_putchar_len(c, len);
}
