# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiselann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 09:39:52 by fiselann          #+#    #+#              #
#    Updated: 2022/02/08 10:46:27 by fiselann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_printf.c	

OBJS = 		${SRCS:.c=.o}

NAME = 		libftprintf.a

LIBFT =		./libft/libft.a

.c.o:		gcc -Wall -Wextra -Werror -Ilibftprintf.h -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${MAKE} -C ./libft   #create .o files of my libft functions, makes an archive (.a) and puts the objects in this archive
				cp -r ${LIBFT} ${NAME}   #copies the objects in libftprintf
				ar -rcs ${NAME} ${OBJS}   #makes the libftprintf library.

all:		${NAME}

clean:		
				${MAKE} clean -C ./libft
				rm -rf ${OBJS}

fclean:		clean
				${MAKE} fclean -C ./libft
				rm -f ${NAME}

re: 		fclean all	

.PHONY:		fclean clean all re

#### NOTES TO MYSELF: ####
# using ${} or $() to reference a variable is the same
# ${MAKE} is a default variable which gets replace with 'make'


