#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    //size_t index;
    size_t srclen;

    if (!src)
        return dest;

    srclen = strlen((char *)src);
    //index = 0;

    if (srclen > n)
    {
      //n--;
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

// int main()
// {
// 	char *src = "--> nyancat <--\n\r";
// 	char dst1[30];
// 	char dst2[30];
// 	size_t max = 12;

// 	memset(dst1, 'B', sizeof(dst1));
// 	memset(dst2, 'B', sizeof(dst2));
// 	strncpy(dst1, src, max);
// 	ft_strncpy(dst2, src, max);
// 	printf("%s\n", dst1);
// 	printf("%s\n", dst2);
// 	if (memcmp(dst1, dst2, 29))
// 	{
// 		printf("FAILED\n");
// 		exit(1);
// 	}
// 	printf("SUCCESS\n");
// 	exit(0);
// }