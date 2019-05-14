#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    const char  *source;
    char        *destination;
    int         index;

    index = 0;
    source = src;
    destination = dest;

    while (n-- > 0)
    {
        destination[index] = source[index];

        if (source[index] == (char)c)
        {
            return ((void *)&source[index + 1]);
        }
        index++;
    }
    return (dest);
}
