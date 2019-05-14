int	ft_strlen(char* str)
{
	int count;

	count = -1;

	while (str[++count]) ;

	return (count);
}