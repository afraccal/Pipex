# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:51:48 by afraccal          #+#    #+#              #
#    Updated: 2023/03/16 10:31:17 by afraccal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = pipex.c pipex_utils.c error.c
LIBFT = libft/libft.a
PRINT = ft_printf/libftprintf.a
OBJS = ${SRCS:.c=.o}
BSRCS = bonus.c pipex_utils.c error.c
BOBJS = ${BSRCS:.c=.o}

all:	${NAME}

${LIBFT}:
	make -C libft

${PRINT}:
	make -C ft_printf

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} ${PRINT} ${LIBFT}
	${CC} ${CFLAGS} ${OBJS} ${PRINT} ${LIBFT} -o $(NAME)

bonus:	${BOBJS} ${PRINT} ${LIBFT}
	${CC} ${CFLAGS} ${BOBJS} ${PRINT} ${LIBFT} -o $(NAME)

clean:
	${RM} ${OBJS}
	${RM} ${BOBJS}
	make clean -C ft_printf
	make clean -C libft

fclean: clean
	${RM} ${NAME}
	make fclean -C ft_printf
	make fclean -C libft

re:	fclean all

.PHONY:
	all clean fclean re