NAME		= fixed

SRC 		= main.cpp Fixed.cpp

OBJS		= ${SRC:.cpp=.o}

CLANG		= clang++ -std=c++98
CFLAGS		= -Wall -Wextra -Werror -I.

RM			= rm -f

.PHONY: all clean fclean re

all:		${NAME}

${NAME}: ${OBJS}
		${CLANG} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean $(NAME)