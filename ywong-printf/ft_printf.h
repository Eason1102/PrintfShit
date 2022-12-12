/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:42:40 by ywong             #+#    #+#             */
/*   Updated: 2022/11/10 14:19:49 by ywong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *string, ...);

void	ft_putchar_len(char c, int *len);
void	ft_putnbr_int_len(int n, int *len);
void	ft_putnbr_unint_len(unsigned int n, int *len);
void	ft_putstr_len(char *s, int *len);
void	ft_putnbr_hex_lower_len(unsigned int n, int *len);
void	ft_putnbr_hex_upper_len(unsigned int n, int *len);
void	ft_putnbr_pointer_len(unsigned long n, int *len);

void	ft_printf_check(const char *string, va_list arg_list, int *len);
void	ft_printf_c(va_list arg_list, int *len);
void	ft_printf_s(va_list arg_list, int *len);
void	ft_printf_p(va_list arg_list, int *len);
void	ft_printf_small_x(va_list arg_list, int *len);
void	ft_printf_big_x(va_list arg_list, int *len);
void	ft_printf_d(va_list arg_list, int *len);
void	ft_printf_i(va_list arg_list, int *len);
void	ft_printf_u(va_list arg_list, int *len);
void	ft_printf_x(va_list arg_list, int *len);
void	ft_printf_X(va_list arg_list, int *len);

#endif
