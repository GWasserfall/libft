#include <string.h>
#include <stdio.h>

void *ft_memchr(void *s, int c, size_t n)
{
	char *str;
	unsigned int index;

	str = (char *)s;
	index = 0;

	while (index < n)
	{
	 	if (c == str[index])
	 		return (void *)&str[index];
		index++;
	}
	return NULL;
}