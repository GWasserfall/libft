#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		iter;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;

	if ((iter = 0) && n == 0) 
		return (0);

	while (++iter < n)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
	}
	return (*str1 - *str2);
}
