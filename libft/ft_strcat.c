#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int len;
	int ind;

	len = ft_strlen(dest);
	ind = 0;

	while (*src)
	{
		dest[len  + ind] = *src;
		src++;
		ind++;
	}
	dest[len + ind] = '\0';
	return dest;
}
