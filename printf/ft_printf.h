/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseah <eseah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:47:46 by eseah             #+#    #+#             */
/*   Updated: 2022/11/24 04:35:00 by eseah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putdec(int nb);
int	ft_puthex(unsigned int nb, char c);
int	ft_putunsdec(unsigned int nb);
int	ft_putptr(unsigned long nb);
int	ft_putstr(char *s);

#endif
