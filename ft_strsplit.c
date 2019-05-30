/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:15:26 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/30 11:16:04 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		words;
	int		str_index;
	int		arr_index;

	arr_index = 0;
	words = ft_wordcount((char *)s, c);
	array = malloc((sizeof(char *) * (words + 1)));
	while (*s)
	{
		str_index = 0;
		if (*s != c && *s != '\0')
		{
			while (s[str_index] != c && s[str_index] != '\0')
				str_index++;
			array[arr_index] = ft_strnew(str_index + 1);
			ft_memcpy(array[arr_index], s, str_index);
			s += str_index - 1;
			arr_index++;
		}
		s++;
	}
	array[words] = NULL;
	return (array);
}
