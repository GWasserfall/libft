#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t index;

	index = 0;

	if (dstsize == 0)
		return (dstsize);

	while (index < (dstsize - 1))
	{
		*dst = *src;
		src++;
		dst++;
		index++;
	}
	*dst = '\0';

	return (index);
}
