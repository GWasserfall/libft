#include <string.h>

// ft_memset(string, '.', int(len)*sizeof(char));

void *ft_memset(void *dest, int val, size_t length)
{
    char *ptr;
    int index;

	index = 0;
    ptr = dest;

    while (length-- > 0)
    {
        ptr[index] = val;
		index++;
    }
    return (dest);
}

