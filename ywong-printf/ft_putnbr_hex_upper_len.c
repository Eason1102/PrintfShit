/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper_len.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:27:08 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:18:55 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex_upper_len(unsigned int n, int *len)
{
	unsigned long long	long_n;

	long_n = n;
	if (long_n < 16)
	{
		if (long_n < 10)
			ft_putchar_len('0' + long_n, len);
		else
			ft_putchar_len((long_n - 10) + 'A', len);
	}
	else if (long_n >= 16)
	{
		ft_putnbr_hex_upper_len(long_n / 16, len);
		ft_putnbr_hex_upper_len(long_n % 16, len);
	}
}
