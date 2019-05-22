#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	// size_t diff;
	// size_t str;
	size_t i;
	char *newstr;

	i = 0;

	if (!len || !start)
		return NULL;
	
	s += (int)start;

	newstr = ft_strnew(100);

	while (len)
	{
		newstr[i] = *s;
		len--;
		i++;
	}

	return newstr;
}