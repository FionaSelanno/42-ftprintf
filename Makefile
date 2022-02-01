SRCS =

OBJS = 		${SRCS:.c=.o}

NAME = 		libftprintf.a

FLAGS =		-Wall -Wextra -Werror

c.o:		gcc {FLAGS} -Ilibftprintf.h -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:		
				rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
				rm -f ${NAME}

re: 		fclean all	

.PHONY:		fclean clean all re
