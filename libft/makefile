re:
	rm libft.a || echo 'No lib file found'
	gcc -c ft_*.c -Wall -Wextra -Werror
	ar -rsc libft.a ft_*.o
	rm *.o

run:
	gcc -g test.c libft.a && ./a.out

so:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o


clean:
	rm *.o > /dev/null | echo "Already Clean"
