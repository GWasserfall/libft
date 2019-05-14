#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp;
	const char	*source;
	char		*destination;
	int			index;

	temp = (char *)malloc(n);
	source = (char *)src;
	destination = (char *)dest;
	index = 0;

	while (index < (int)n)
	{
		temp[index] = source[index];
		index++;
	}
	
	while (--index >= 0)
		destination[index] = temp[index];
	
	return (dest);
}
