#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int length;
	int index;

	index = 0;
	length = ft_strlen(needle);

	if (length == 0)
		return (haystack);
	while (*haystack++)
	{
		while (needle[index] != 0)
		{
			if (needle[index] != *(haystack + index))
				break;
			if (index == length - 1)
				return haystack;
			index++;
		}
		if (len-- == 0)
			return NULL;
		index = 0;
	}
	return NULL;
}