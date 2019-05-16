#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char dest[] = "Olded";
	const char src[] = "Newed";

	printf("Before: ");
	printf("%s", dest);
	printf("\n");
	printf("After: ");
	printf("%s\n", ft_memmove(dest, src, 3));
	return (0);
}