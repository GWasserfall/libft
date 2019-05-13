#include <string.h>
#include <stdio.h>

void *ft_memchr(void *s, int c, size_t n)
{
	char *str;
	int index;

	str = (char *)s;
	index = 0;

	while (index < n)
	{
	 	if (c == str[index])
	 		return (void *)&str[index];
		index++;
	}
	return NULL;
}

void main()
{
	char* string = "Hellos Deary";

	printf("%d", &string[8] == ft_memchr(string, 'o', 9) );


}