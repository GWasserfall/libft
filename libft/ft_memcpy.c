#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    int         index;
    const char  *source;
    char        *destination;

    if (n <= 0)
        return (dest);

    index = 0;
    source = src;
    destination = dest;

    while (n-- > 0)
    {
        destination[index] = source[index];
        index++;
    }
    return dest;
}