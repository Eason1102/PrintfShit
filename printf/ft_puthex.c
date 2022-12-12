/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseah <eseah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:14:44 by eseah             #+#    #+#             */
/*   Updated: 2022/12/12 17:45:35 by eseah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

void	ft_lower(unsigned int nb)
{
	char	*lower;

	lower = "0123456789abcdef";
	if (nb > 15)
	{
		ft_lower(nb / 16);
		ft_lower(nb % 16);
	}
	else
		ft_putchar(lower[nb]);
}

void	ft_upper(unsigned int nb)
{
	char	*upper;

	upper = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_upper(nb / 16);
		ft_upper(nb % 16);
	}
	else
		ft_putchar(upper[nb]);
}

int	ft_puthex(unsigned int nb, char c)
{
	int	count;

	count = ft_hexlen(nb);
	if (c == 'X')
		ft_upper(nb);
	else
		ft_lower(nb);
	return (count);
}
