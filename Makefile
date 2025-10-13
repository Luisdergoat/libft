# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 11:34:54 by lunsold           #+#    #+#              #
#    Updated: 2025/10/10 11:57:36 by lunsold          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 
OBJ = $(SRC head:.c=.o)
head = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(head)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(head)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
	./$(NAME)
