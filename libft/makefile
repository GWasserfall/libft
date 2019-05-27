 
NAME=libft.a
# CFLAGS=-Wall -Werror -Wextra

$(NAME): clean
	gcc -c ft_*.c
	ar -rsc libft.a ft_*.o
	ranlib libft.a

clean:
	-rm ft_*.o

fclean:
	-rm libft.a

re: clean fclean all

release:
	rm libft.a || echo 'No lib file found'
	gcc -c ft_*.c -Wall -Wextra -Werror
	ar -rsc libft.a ft_*.o
	rm *.o

run1:
	gcc -g test.c libft.a && ./a.out

so:
	-rm ftlib.so
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o
