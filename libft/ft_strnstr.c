/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:44:04 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/23 15:32:44 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int length;
	int index;
	int iter;

	index = 0;
	length = ft_strlen(needle);
	if (((iter = 1) && length == 0) || (haystack == needle))
		return (haystack);
	while (*haystack++ && iter++)
	{
		if (iter == (int)len)
			return (NULL);
		while (needle[index] != 0)
		{
			if (needle[index] != *(haystack + index))
				break ;
			if (index == length - 1)
				return (haystack);
			index++;
			if ((iter + index) >= (int)len)
				return (NULL);
		}
		index = 0;
	}
	return (NULL);
}
