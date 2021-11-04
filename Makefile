SCRS		= $(wildcard *.c)
OBJS		= ${SCRS:.c=.o}
NAME		= libft.a
CC			= gcc -Wall -Wextra -Werror

.c.o:
			${CC} -I. -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
