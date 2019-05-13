#include "libft.h"

char *ft_strstr(char *haystack, char *needle)
{
	int len;
	int index;

	index = 0;
	len = ft_strlen(needle);

	if (len == 0)
		return (haystack);
	while (*haystack++)
	{
		while (needle[index] != 0)
		{
			if (needle[index] != *(haystack + index))
				break;
			if (index == len - 1)
				return haystack;
			index++;
		}
		index = 0;
	}
	return NULL;
}