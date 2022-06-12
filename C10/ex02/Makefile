# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 08:58:56 by lvogelsa          #+#    #+#              #
#    Updated: 2022/06/09 08:59:31 by lvogelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_abs.c ./srcs/ft_args_parser.c ./srcs/ft_atoi.c ./srcs/ft_console_io.c ./srcs/ft_is.c ./srcs/ft_strncpy.c ./srcs/ft_tail.c ./srcs/ft_tail_out.c ./srcs/ft_tail_utils.c ./srcs/main.c 
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_tail
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

re : fclean all

.PHONY: all clean fclean re .c.o test
