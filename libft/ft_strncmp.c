#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;

	while (index < n)
	{
		if (*s1 != *s2)
			return ((*s1 - *s2));
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
