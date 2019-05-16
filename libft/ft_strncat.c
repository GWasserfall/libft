#include <string.h>
#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t index;
	size_t slen;

	slen = ft_strlen(dest);
	index = 0;
	
	while (index < n)
	{
		dest[index + slen] = src[index];
		if (!src[index])
		{
			dest[index + slen + 1] = '\0';
			break;
		}
		index++;
	}
	return dest;
}
