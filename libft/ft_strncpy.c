#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t index;
	size_t srclen;

	srclen = ft_strlen((char *)src);
	index = 0;

	while (n > 0)
	{
		while (index < srclen)
		{
			dest[index] = src[index];
			index++;
			n--;
		}
		dest[index] = 0;
		n--;
		index++;
	}
	return (dest);
}
