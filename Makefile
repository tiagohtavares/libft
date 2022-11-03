# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 11:13:01 by ttavares          #+#    #+#              #
#    Updated: 2022/11/03 17:42:20 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c \
		ft_memcpy.c

NAME = libft.a

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o test.o main.c $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
