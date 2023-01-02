# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 04:34:04 by yismaail          #+#    #+#              #
#    Updated: 2022/11/07 11:45:18 by yismaail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= 	ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c

OBJS 	= 	${SRCS:.c=.o}

CC 		= 	cc

NAME 	= 	libftprintf.a

CFLAGS 	= 	-Wall -Wextra -Werror

all 	= 	${NAME}




all 	:	${NAME}

${NAME}	:	${OBJS}
			ar -rc libftprintf.a ${OBJS}
			
clean	:	
			rm -f $(OBJS)

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all
