#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    long long num;
    num = (long long)n;
    if (num < 0)
    {
        num *= -1;
        write(fd, "-", 1);
    }

    if (num >= 0 && num <= 9)
    {
        num = num + '0';
        write(fd, &num, 1);
    }
    else
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putnbr_fd(num % 10, fd);
    }
}
