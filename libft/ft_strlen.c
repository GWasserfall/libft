/*
The strlen() function calculates the length of the string pointed to by s, excluding the terminating 
null byte ('\0').

The strlen() function returns the number of characters in the string pointed to by s.
*/

int ft_strlen(char * str)
{
	int count;

	count = 0;

	while (*str++)
	{
		count++;
	}

	return (count);
}