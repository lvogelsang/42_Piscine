# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 08:41:16 by lvogelsa          #+#    #+#              #
#    Updated: 2022/06/01 12:07:56 by lvogelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#! /bin/sh
gcc -Wall -Wextra -Werror -c ft_putchar.c
gcc -Wall -Wextra -Werror -c ft_swap.c
gcc -Wall -Wextra -Werror -c ft_putstr.c
gcc -Wall -Wextra -Werror -c ft_strlen.c
gcc -Wall -Wextra -Werror -c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
