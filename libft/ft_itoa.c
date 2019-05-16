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

    ptr = &result[12];
    printf("Start = %p\n", ptr);

    while (n > 0)
    {
        printf("iter\n");
        *ptr-- = (n % 10) + '0';
        n /= 10;    
    }

    printf("End = %p : %c\n", ptr + 1, *(ptr + 1));

    return ((char *)ptr);
}

void main()
{
    //printf("%p", ft_itoa(1230));
    ft_itoa(1230);
}