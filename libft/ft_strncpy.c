#include "libft.h"
char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t srclen;

    if (!src)
        return dest;

    srclen = ft_strlen((char *)src);
 
    if (srclen > n)
    {
      while (n > 0)
      {
        n--;
        *(dest + n) = *(src + n);
      }
    }
    else
    {
      while (*src && (n--))
      {
        *dest = *src;
        dest++;
        src++; 
      }
      
      while (n > 0)
      {
          *dest = '\0';
          dest++;
          n--;
      }
      *dest = 0;
    }
    return (dest);
}