#include <unistd.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{
	printf("%d", c);
	unsigned char character;

	character = c;
	write(fd, &character, 1);
}