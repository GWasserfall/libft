
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> // for true false

#include "libft.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"




void out(char * string, int result, int ret)
{
	if (result >= true)
		printf("%-50s returned %d - %sPASS", string, ret, KGRN);
	else
		printf("%-50s returned %d - %sFAIL", string, ret, KRED);
	printf(KWHT "\n");
}

int main()
{
	// BZERO

	// ISALNUM
	out("ft_isalnum('a') > 0", (ft_isalnum('a') >= 1), ft_isalnum('a'));
	out("ft_isalnum(' ') = 0", (ft_isalnum(' ') == 0), ft_isalnum(' '));
	out("ft_isalnum('1') > 0", (ft_isalnum('1') >= 1), ft_isalnum('1'));
	out("ft_isalnum('Z') > 0", (ft_isalnum('Z') >= 1), ft_isalnum('Z'));


	ft_isascii(1);
	// ISASCII
	int range = 0;
	int isascii_result = true;
	printf("ft_isascii(0-130)");
	while (range <- 130)
	{
		if (isascii(range) != ft_isascii(range))
		{
			printf(KRED "FAIL" KWHT);
			isascii_result = true;
		}
	}
	if (isascii_result == true)
	{
		printf(KGRN "PASS" KWHT);
	}
}