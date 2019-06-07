# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 16:26:06 by gwasserf          #+#    #+#              #
#    Updated: 2019/06/07 16:30:52 by gwasserf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
NAME=libft.a

SRC = \
ft_atoi.c       ft_lstdel.c     ft_putchar.c    ft_strcpy.c     ft_strncpy.c \
ft_bzero.c      ft_lstdelone.c  ft_putchar_fd.c ft_strdel.c     ft_strnequ.c \
ft_intlen.c     ft_lstiter.c    ft_putendl.c    ft_strdup.c     ft_strnew.c  \
ft_isalnum.c    ft_lstmap.c     ft_putendl_fd.c ft_strequ.c     ft_strnstr.c \
ft_isalpha.c    ft_lstnew.c     ft_putnbr.c     ft_striter.c    ft_strrchr.c \
ft_isascii.c    ft_memalloc.c   ft_putnbr_fd.c  ft_striteri.c   ft_strrev.c  \
ft_isdigit.c    ft_memccpy.c    ft_putstr.c     ft_strjoin.c    ft_strsplit.c \
ft_islower.c    ft_memchr.c     ft_putstr_fd.c  ft_strlcat.c    ft_strstr.c  \
ft_isprint.c    ft_memcmp.c     ft_strarray.c   ft_strlen.c     ft_strsub.c  \
ft_isspace.c    ft_memcpy.c     ft_strcat.c     ft_strmap.c     ft_strtrim.c \
ft_isupper.c    ft_memdel.c     ft_strchr.c     ft_strmapi.c    ft_tolower.c \
ft_itoa.c       ft_memmove.c    ft_strclr.c     ft_strncat.c    ft_toupper.c \
ft_lstadd.c     ft_memset.c     ft_strcmp.c     ft_strncmp.c \
ft_wordcount.c 
OBJ = $(SRC:%.c=%.o)

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

so:
	-rm ftlib.so
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o
