# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ywong <ywong@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 16:07:58 by ywong             #+#    #+#              #
#    Updated: 2022/11/10 14:48:32 by ywong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name #
NAME		=	libftprintf.a

# FLAGS #
CC			=	gcc -Wall -Werror -Wextra
RM			=	rm -f

# Path & Library #
LIB			=	ft_printf.h

# Source File #
SRCS		=	ft_printf.c \
				ft_printf_c.c \
				ft_printf_s.c \
				ft_printf_p.c \
				ft_printf_d.c \
				ft_printf_i.c \
				ft_printf_u.c \
				ft_printf_x.c \
				ft_putchar_len.c \
				ft_putstr_len.c \
				ft_putnbr_hex_lower_len.c \
				ft_putnbr_hex_upper_len.c \
				ft_putnbr_int_len.c \
				ft_putnbr_unint_len.c \
				ft_putnbr_pointer_len.c

OBJS		=	$(SRCS:.c=.o)

# Commands #
$(NAME)		:	$(OBJS)
				@echo "  Making Library"
				@ar rcs $(NAME) $(OBJS)

# NOTE TO COMMENT #
all			:	$(NAME)

%.o			:	%.c
				${CC} -c $< -o $@

clean		:
				@echo "  Cleaning Object Files"
				@$(RM) $(OBJS)
				
fclean		:	clean
				@echo "  Cleaning Libary Files"
				@$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean all re