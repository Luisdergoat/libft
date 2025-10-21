# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 11:34:54 by lunsold           #+#    #+#              #
#    Updated: 2025/10/21 12:31:51 by lunsold          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME)
# 	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re