# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 14:27:20 by ftadeu-d          #+#    #+#              #
#    Updated: 2020/02/16 17:28:53 by ftadeu-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strnstr.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strncpy.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_putendl_fd.c \
	  ft_strmapi.c \
	  ft_count_nbr_len.c \
	  ft_itoa.c \
	  ft_split.c

BONUS = $(SRC) ft_lstnew.c ft_lstadd_front.c

CFLAGS = -Wall -Werror -Wextra

OBJ = $(subst .c,.o,$(SRC))

BONUS_OBJ = $(subst .c,.o,$(BONUS))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

OBJ: $(subst .o,.c,$(SRC))
	gcc -c $(CFLAGS) $(SRC)

bonus:
	gcc $(CFLAGS) -c $(BONUS)
	ar rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
