make:
	gcc -c ft_*.c -Wall -Wextra -Werror
	ar -rsc libft.a ft_*.o
	rm *.o

run:
	gcc -g test.c libft.a && ./a.out

shared:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o


clean:
	rm *.o > /dev/null | echo "Already Clean"