#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t iterations;
	char * ptr;

	iterations = dstsize - (size_t)strlen(dst) - 1;
	
	ptr = dst;

	ptr += strlen(dst);

//	printf("ptr = %s\n", ptr);

//	printf("Will do this many iterations : %d\n", (int)iterations);

	while (iterations > 0)
	{
//		printf("%d\n", iterations);
		*ptr = *src;
		ptr++;
		src++;		
		iterations--;
	}
	*(ptr) = '\0';

	return (iterations);
}

//int main(void)
//{
//	char dst[70] = "hello";
//	char src[] = "hi";
//
//	ft_strlcat(dst, src, 8);
//	printf("%s\n", dst);
//	return (0);
//
//}
