#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{

    int         index;
    const char  *source;
    char        *destination;

    index = 0;
    source = src;
    destination = dest;

	if (src == dest && n > 0)
		return NULL;

    while (n-- > 0)
    {
		if (!(src == dest))
			destination[index] = source[index];
        index++;
    }
	
    return dest;
}

int main()
{
	ft_memcpy(NULL, NULL, 3);
	return (0);
}
