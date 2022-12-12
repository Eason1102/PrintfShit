/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:25:27 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:17:53 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(va_list arg_list, int *len)
{
	char	*s;

	s = va_arg(arg_list, char *);
	if (!s)
		ft_putstr_len("(null)", len);
	else
		ft_putstr_len(s, len);
}
