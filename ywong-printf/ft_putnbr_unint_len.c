/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unint_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:27:08 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:19:27 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unint_len(unsigned int n, int *len)
{
	if (n < 10)
	{
		ft_putchar_len('0' + n, len);
	}
	else if (n >= 10)
	{
		ft_putnbr_unint_len(n / 10, len);
		ft_putnbr_unint_len(n % 10, len);
	}
}

	// long	long_n;
	// long_n = n;
	// // if (long_n < 0)
	// // {
	// // 	long_n = -long_n;
	// // 	ft_putchar_len('-', len);
	// // }
