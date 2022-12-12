/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:27:18 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:17:55 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(va_list arg_list, int *len)
{
	unsigned int	u;

	u = va_arg(arg_list, unsigned int);
	ft_putnbr_unint_len(u, len);
}
