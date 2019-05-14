#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;

	while (*str == '\n' || *str == ' ' || *str == '\t' 
		|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');	
		str++;
	}
	return result * sign;
}