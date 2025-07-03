CC		= cc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -rf
TESTFILE	= tests_libft.c
TESTPROG	= libft.tests
SRC_DIR		= ../src/
OBJ_DIR		= obj/
INC_DIR		= ../include/
LIBFT_A		= ../bin/libft.a

INCLUDE		= -I ${INC_DIR}

test:		${LIBFT_A} ${TESTPROG}
			@./${TESTPROG}

${TESTPROG}:	${OBJS} ${TESTFILE}
			@${CC} ${CFLAGS} ${INCLUDE} -o ${TESTPROG} ${TESTFILE} ${LIBFT_A}

leakfull:	${TESTPROG}
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${TESTPROG}

clean:
			${RM} *.o

fclean:		clean
			${RM} ${TESTPROG}

re:		fclean test

.PHONY:		test leakfull clean fclean re
