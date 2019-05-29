/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:20:03 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/29 14:44:02 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_to_null(char *str, char c)
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
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	char	*ptr;
	int		strlen;
	int		jump;
	int		insert;

	if (!s)
		return (NULL);
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

int main()
{
	ft_strsplit("asd asd ads ", ' ');
	return (0);
}
