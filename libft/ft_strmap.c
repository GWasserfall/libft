#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char *new;

	new = (char *)malloc(4);

	while (*s)
	{
		f(*s);
		s++;
	}
	return new;
}