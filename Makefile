# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiselann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 09:39:52 by fiselann          #+#    #+#              #
#    Updated: 2022/02/16 12:42:11 by fiselann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_printf.c\
			parsers.c\
			helpers.c

OBJS = 		${SRCS:.c=.o}

NAME = 		libftprintf.a

.c.o:		gcc -Wall -Wextra -Werror -Ilibftprintf.h -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:		
				rm -rf ${OBJS}

fclean:		clean
				rm -f ${NAME}

re: 		fclean all	

.PHONY:		fclean clean all re
