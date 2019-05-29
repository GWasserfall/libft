int ft_wordcount(const char *str, char delim)
{
	int counter;

	counter = 0; 
	while (*str)
	{
		if (*str!= delim)
		{
			while((*str != delim) && *str)
				str++;
			counter++;
		}
		if (*str)
			str++;
	}
	return (counter);
}