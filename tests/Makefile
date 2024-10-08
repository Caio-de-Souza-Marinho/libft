TESTFILE	= tests_libft.c
TESTPROGRAM	= libft.tests
SRCDIR		= ../src/
NAME		= libft.a
SRCS		= ${SRCDIR}ft_isalpha.c ${SRCDIR}ft_isdigit.c ${SRCDIR}ft_isalnum.c
OBJS		= ${SRCS:.c=.o}

test:		fclean
			make -C ../src
			@cc -o ${TESTPROGRAM} -I . -I ${SRCDIR} ${TESTFILE} -L${SRCDIR} -lft
			@./${TESTPROGRAM}

leakfull:
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${TESTPROGRAM}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME} ${TESTPROGRAM}

re:		fclean test
