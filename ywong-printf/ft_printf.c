/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:14:23 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:18:29 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_check(const char *string, va_list arg_list, int *len)
{
	if (*(string + 1) == 'c')
		ft_printf_c(arg_list, len);
	else if (*(string + 1) == 's')
		ft_printf_s(arg_list, len);
	else if (*(string + 1) == 'p')
		ft_printf_p(arg_list, len);
	else if (*(string + 1) == 'd')
		ft_printf_d(arg_list, len);
	else if (*(string + 1) == 'i')
		ft_printf_i(arg_list, len);
	else if (*(string + 1) == 'u')
		ft_printf_u(arg_list, len);
	else if (*(string + 1) == 'x')
		ft_printf_small_x(arg_list, len);
	else if (*(string + 1) == 'X')
		ft_printf_big_x(arg_list, len);
	else if (*(string + 1) == '%')
		ft_putchar_len('%', len);
}

int	ft_printf(const char *string, ...)
{
	int		len;
	va_list	arg_list;

	len = 0;
	va_start(arg_list, string);
	while (*string)
	{
		if (*string == '%')
		{
			ft_printf_check(string, arg_list, &len);
			++ string;
		}	
		else
			ft_putchar_len(*string, &len);
		++string;
	}
	return (len);
}

// # include <stdio.h>
// # include <limits.h>

// int	main(void)
// {
// 	int	original;
// 	int	my;

// 	printf("Original\n");
// 	original = printf("[%lx]\n", LONG_MIN);
// 	printf("original value = [%d]\n", original);
// 	printf("\n");

// 	ft_printf("My\n");
// 	my = ft_printf("[%x]\n", LONG_MIN);
// 	ft_printf("my value = [%d]\n", my);
// 	ft_printf("\n");
// }
