NAME		= libft.a
CC		= cc
RM		= rm -f
TESTFILE	= tests_libft.c
TESTPROGRAM	= libft.tests
SRCDIR		= ../src/

LIBFT_SRCS	= ${SRCDIR}ft_isalpha.c ${SRCDIR}ft_isdigit.c ${SRCDIR}ft_isalnum.c ${SRCDIR}ft_isascii.c ${SRCDIR}ft_isprint.c \
		  ${SRCDIR}ft_strlen.c  ${SRCDIR}ft_memset.c ${SRCDIR}ft_bzero.c ${SRCDIR}ft_memcpy.c ${SRCDIR}ft_memmove.c \
		  ${SRCDIR}ft_strlcpy.c ${SRCDIR}ft_strlcat.c ${SRCDIR}ft_toupper.c ${SRCDIR}ft_tolower.c ${SRCDIR}ft_strchr.c \
		  ${SRCDIR}ft_strrchr.c ${SRCDIR}ft_strncmp.c ${SRCDIR}ft_memchr.c ${SRCDIR}ft_memcmp.c ${SRCDIR}ft_strnstr.c \
		  ${SRCDIR}ft_atoi.c ${SRCDIR}ft_calloc.c ${SRCDIR}ft_strdup.c \
		  ${SRCDIR}ft_substr.c ${SRCDIR}ft_strjoin.c ${SRCDIR}ft_strtrim.c ${SRCDIR}ft_split.c ${SRCDIR}ft_itoa.c \
		  ${SRCDIR}ft_striteri.c ${SRCDIR}ft_putchar_fd.c ${SRCDIR}ft_putstr_fd.c ${SRCDIR}ft_putendl_fd.c ${SRCDIR}ft_putnbr_fd.c \
		  ${SRCDIR}ft_lstnew.c ${SRCDIR}ft_lstadd_front.c ${SRCDIR}ft_lstsize.c ${SRCDIR}ft_lstlast.c ${SRCDIR}ft_lstadd_back.c \
		  ${SRCDIR}ft_lstdelone.c ${SRCDIR}ft_lstclear.c ${SRCDIR}ft_lstiter.c ${SRCDIR}ft_lstmap.c

GNL_SRCS	= ${SRCDIR}get_next_line.c ${SRCDIR}get_next_line_utils.c

SRCS		= ${LIBFT_SRCS} ${GNL_SRCS}

OBJS		= ${SRCS:.c=.o}

test:		fclean
			make -C ../src
			@${CC} -o ${TESTPROGRAM} -I . -I ${SRCDIR} ${TESTFILE} -L${SRCDIR} -lft
			@./${TESTPROGRAM}

leakfull:
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${TESTPROGRAM}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} ${TESTPROGRAM}

re:		fclean test

.PHONY:		test leakfull clean fclean re
