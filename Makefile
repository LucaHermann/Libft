# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhermann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 03:00:07 by lhermann          #+#    #+#              #
#    Updated: 2016/11/23 03:35:37 by lhermann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLGS = -Wall -Wextra -Werror

SRCS =ft_atoi.c\
	  ft_bzero.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_memalloc.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memdel.c\
	  ft_memmove.c\
	  ft_memset.c \
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_strcat.c\
	  ft_strchr.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdup.c\
	  ft_strlcat.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_strnew.c\
	  ft_strnstr.c\
	  ft_strstr.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_strlen.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strrchr.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_strrchr.c\
	  ft_itoa.c\
	  ft_strequ.c\
	  ft_strjoin.c\
	  ft_strnequ.c\
	  ft_strsplit.c\
	  ft_strsub.c\
	  ft_strtrim.c\
	  ft_swap.c\
	  ft_lstnew.c\
	  ft_lstmap.c\
	  ft_lstdelone.c\
	  ft_lstiter.c\
	  ft_lstdel.c\
	  ft_lstadd.c

OBJS= $(SRCS:.c=.o)

INC =-I./includes

all: $(NAME)

$(NAME):
	gcc -c $(FLGS) $(SRCS) $(INC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
