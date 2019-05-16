#include <string.h>

char *strncpy(char *dest, const char *src, size_t n)
{
	size_t index;

	index = 0;

	while (index < n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}