/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:27:08 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:18:58 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_int_len(int n, int *len)
{
	long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		long_n = -long_n;
		ft_putchar_len('-', len);
	}
	if (long_n < 10)
	{
		ft_putchar_len('0' + long_n % 10, len);
	}
	else if (long_n >= 10)
	{
		ft_putnbr_int_len(long_n / 10, len);
		ft_putnbr_int_len(long_n % 10, len);
	}
}
