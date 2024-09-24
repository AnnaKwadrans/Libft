# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 20:46:06 by akwadran          #+#    #+#              #
#    Updated: 2024/09/24 00:38:21 by akwadran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar -rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_ctype2.c ft_put.c ft_string2.c ft_string.c ft_ctype.c ft_stdlib.c ft_string3.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
