#include <string.h>
#include <stdlib.h>
#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *mem;

	mem = (void *)malloc(size);

	ft_bzero(mem, size);

	if (!mem)
		return (NULL);

	return (mem);
}