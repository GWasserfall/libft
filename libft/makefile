make:
	gcc -c ft_*.c
	ar -rsc libft.a ft_*.o
	rm *.o

run:
	gcc test.c libft.a && ./a.out

clean:
	rm *.o > /dev/null | echo "Already Clean"