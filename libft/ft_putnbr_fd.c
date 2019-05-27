#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	char number;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		number = n + '0';
		write(fd, &number, 1);
		return ;
	}	
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}