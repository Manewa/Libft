SRCS =  ft_atoi.c ft_isascii.c ft_memchr.c ft_strchr.c ft_strlen.c ft_bzero.c ft_isdigit.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_isprint.c ft_memcpy.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memset.c ft_strlcpy.c ft_strrchr.c ft_strjoin.c ft_substr.c ft_split.c ft_strtrim.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra

.c.o:
			cc ${CFLAGS} -c $< -o ${<:.c=.o}
so:
	cc -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

${NAME}:    ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
