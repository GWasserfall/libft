
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> // for true false

#include "libft.h"

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void out(char * string, int result, int ret)
{
	if (result >= true)
		printf("%-50s returned %-10d - %sPASS", string, ret, KGRN);
	else
		printf("%-50s returned %-10d - %sFAIL", string, ret, KRED);
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


	// ISASCII
	int range = 0;
	int isascii_result = true;
	printf("%-70s - ", "ft_isascii(0-130)");
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
		printf(KGRN "PASS" KWHT "\n");
	}

	// ISDIGIT
	out("ft_isdigit('1') ! 0", (ft_isdigit('1') != 0), ft_isdigit('1'));
	out("ft_isdigit('a') = 0", (ft_isdigit('a') == 0), ft_isdigit('a'));

	// ISPRINT
	out("ft_isprint('\\0')", (ft_isprint('\0') == 0), ft_isprint('\0'));
	out("ft_isprint('a')", (ft_isprint('a') > 0), ft_isprint('a'));
	out("ft_isprint(' ')", (ft_isprint(' ') > 0), ft_isprint(' '));

	out("ft_tolower('A')", (ft_tolower('A') == 'a'), ft_tolower('A'));
	out("ft_tolower('Z')", (ft_tolower('Z') == 'z'), ft_tolower('Z'));
	out("ft_tolower('1')", (ft_tolower('1') == '1'), ft_tolower('1'));

	out("ft_toupper('a')", (ft_toupper('a') == 'A'), ft_toupper('a'));
	out("ft_toupper('z')", (ft_toupper('z') == 'Z'), ft_toupper('z'));
	out("ft_toupper('A')", (ft_toupper('A') == 'A'), ft_toupper('A'));

	out("ft_strlen(\"This is fifteen\")", (ft_strlen("This is fifteen") == 15), ft_strlen("This is fifteen"));
	out("ft_strlen(\"\")", (ft_strlen("") == 0), ft_strlen(""));
	out("ft_strlen(\"some random \\0 this is invisible'\")", (ft_strlen("some random \0 this is invisible") == 12), ft_strlen("some random \0 this is invisible'"));


	// Memset
	//char * string = "Hello";
	//char * ptr = &string[1];

	//memset("string", '.', sizeof(char));
	// char buffer[90];

	// ft_memset( buffer, 0, 10 );
    // //buffer[89] = '\0';

	// printf("%s", buffer);

	printf("%s\n", ft_strstr("a long string", ""));


	printf("%d\n", ft_atoi("    1234"));


	// memmove
	char str[5] = "hello";
	ft_memmove(str, "source string", 3);
	printf("%s", str);
	// should output "soulo"


	// Test strcat
	char buffer[80];

    strcpy( buffer, "Hello " );
    ft_strcat( buffer, "world" );

    printf( "%s\n", buffer );

}