/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointer_len.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:27:08 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:19:00 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pointer_len(unsigned long n, int *len)
{
	if (n < 16)
	{
		if (n < 10)
			ft_putchar_len('0' + n, len);
		else
			ft_putchar_len((n - 10) + 'a', len);
	}
	else if (n >= 16)
	{
		ft_putnbr_pointer_len(n / 16, len);
		ft_putnbr_pointer_len(n % 16, len);
	}
}
