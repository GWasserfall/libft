#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		new[i] = f(*s);
		s++;
		i++;
	}
	return new;
}