# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 11:13:01 by ttavares          #+#    #+#              #
#    Updated: 2022/11/07 17:11:30 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_strlen.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c

OBJS	=	$(SRCS:.c=.o)

BONUS	=

BONUS_OBJS	=	$(BONUS:.c=.o)

CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o test.o main.c $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
