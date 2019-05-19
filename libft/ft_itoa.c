#include "libft.h"

char	*ft_itoa(int n)
{
    int     negative;
    char	*str;

    str = &ft_strnew(13)[11];

    if ((negative = 0) || ((n < 0) && (n *= -1)))
		negative = 1;
	
	if (!str)
		return NULL;

    while (n > 0)
    {
		*str-- = (n % 10) + '0';
		n /= 10;
	}

	if (negative == 1)
		*str-- = '-';

	return (++str);
}