# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 15:12:09 by rkobelie          #+#    #+#              #
#    Updated: 2024/07/15 15:32:18 by rkobelie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =  $(wildcard actions/*.c utils/*.c) main.c

OBJS = ${SRCS:.c=.o}


CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -rf

all: ${NAME} ${CHECK}
${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}
	@${RM} ${CHECK_OBJS}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re