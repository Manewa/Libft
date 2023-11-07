# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschecro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 01:57:46 by tschecro          #+#    #+#              #
#    Updated: 2023/11/07 14:54:56 by namalier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC		=	ft_atoi.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c \
            ft_tolower.c	ft_toupper.c	ft_strchr.c	ft_isprint.c \
           	ft_strrchr.c	ft_strnstr.c	ft_strlcat.c ft_strlcpy.c \
            ft_strlen.c ft_strncmp.c	ft_memcmp.c	ft_memcpy.c \

SRC_BONUS 	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
            		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \


HEADER		=	libft.h

OBJ		=	$(SRC:.c=.o)

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

NAME		=	libft.a

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "\033[1;32m\nDone!\033[0m"

%.o		:	%.c $(HEADER)
			@printf "\033[0;33mGenerating libft object... %-38.38s \r" $@
			@$(CC) -Wall -Wextra -Werror -c $< -o $@

clean		:
			rm -f $(OBJ) $(OBJ_BONUS)

fclean		:	clean
			rm -f $(NAME)

re		:	fclean all

bonus		:	$(OBJ) $(OBJ_BONUS)
			@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
			@ranlib $(NAME)
			@echo "\033[1;32m\nDone!\033[0m"

so		:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
			gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJ_BONUS)

.PHONY		:	all clean fclean re
