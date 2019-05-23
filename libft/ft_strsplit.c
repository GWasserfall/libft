#include "libft.h"
#include <stdio.h>

static int char_to_null(char *str, char c)
{
	int count;
	count = 0;
	while (*str)
	{
		if (*str == c)
		{
			*str = '\0';
			count++;
		}
		str++;
	}
	return count;
}

char	**ft_strsplit(char const *s, char c)
{
	char **array;
	char *ptr;	
	int strlen;
	int jump;
	int insert;

	if (!s)
		return NULL;

	insert = 0;
	ptr = ft_strdup(s);
	strlen = ft_strlen(ptr);
	array = (char **)malloc(char_to_null(ptr, c) * sizeof(char *));
	while (strlen > 0)
	{
		if (*ptr != 0)
		{
			jump = ft_strlen(ptr);
			array[insert] = ft_strnew(jump);
			ft_strcpy(array[insert], ptr);
			insert++;
			ptr += jump;
			strlen -= jump;
		}
		ptr++; 
		strlen--;
	}
	return (array);
}

// int main(void)
// {
// 	char **strs;
// 	strs = ft_strsplit("*mnmn*", '*');
	
// 	while (*strs)
// 	{
// 		printf("Word : %s\n", *strs);
// 		strs++;
// 	}
	
// 	return (0);
// }

// Description Allocates (with malloc(3)) and returns an array of “fresh” 
// strings (all ending with ’\0’, including the array itself) obtained by spliting s using 
// the character c as a delimiter. If the allocation fails the function returns NULL. 
// Example : ft_strsplit("*hello*fellow***students*", ’*’) returns the array
//  ["hello", "fellow", "students"]. 
 
//  Param. #1 The string to split. 
//  Param. #2 The delimiter character. 
 
//  Return value The array of “fresh” strings result of the split. 
 
//  Libc functions malloc(3), free(3)
