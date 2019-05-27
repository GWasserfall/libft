 
NAME=libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)


INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c ft_*.c
	@ar rc $(NAME) ft_*.o
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
