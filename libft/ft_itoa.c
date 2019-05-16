#include "libft.h"
#include <stdio.h>

char * ft_itoa(int n)
{
    int     negative;
    char *  ptr;
    char    result[12];

    negative = 0;

    if (n < 0)
        negative = 1;

    ptr = &result[11];

    while (n > 0)
    {
        *ptr-- = (n % 10);
        n /= 10;
    }

    return (ptr);
}

void main()
{
    printf("%s", ft_itoa(1230));
}