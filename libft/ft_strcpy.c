char	*ft_strcpy(char *dst, const char *src) 
{
	int index;
	
	index = 0;

	while (src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

