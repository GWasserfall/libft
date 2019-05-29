#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **array;
	int words;
	int str_index;
	int arr_index;

	printf("Got str: [%s]\n",s);
	arr_index = 0;
	words = ft_wordcount((char *)s, c);
	printf("words: [%d]\n",words);
	array = malloc((sizeof(char *) * (words + 1)));
	while (*s)
	{
		str_index = 0;
		if (*s != c && *s != '\0')
		{
			while (s[str_index] != c && s[str_index] != '\0')
			{	
				printf("[%d] : [%c]\n", str_index, s[str_index]);
				str_index++;
			}
			array[arr_index] = ft_strnew(str_index + 1);
			printf("passed to memcopy : %s\n", s);
			ft_memcpy(array[arr_index], s, str_index);
			s += str_index;
			arr_index++;
		}
		s++;
	}
	array[words + 1] = NULL;
	return(array);
}


// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int main()
// {

// 	char	**tabstr;
// 	int		i;

// 	i = 0;
// 	tabstr = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	while (tabstr[i])
// 	{
// 		ft_print_result(tabstr[i]);
// 		write(1, "\n", 1);
// 		i++;
// 	}


// 	return (0);
// }