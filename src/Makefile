NAME		= libft.a
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c
OBJS		= ${SRCS:.c=.o}
CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

${OBJS}:
			cc ${CFLAGS} -I . -c ${SRCS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:		fclean all
