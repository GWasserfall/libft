#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	int i;

	if (!s)
		return NULL;

	i = 0;
	new = ft_strnew(ft_strlen((char *)s));

	if (!new)
		return NULL;

	while (*s)
	{
		new[i] = f(i, *s);
		s++;
		i++;
	}
	return new;
}