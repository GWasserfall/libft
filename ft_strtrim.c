/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:56:33 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/28 16:41:55 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cursor;
	char	*newstr;
	int		index;

	if (!s)
		return (NULL);
	cursor = (char *)s;
	while (ft_isspace(*cursor))
		cursor++;
	if (!*cursor)
		return (cursor);
	index = ft_strlen(cursor);
	while (ft_isspace(cursor[index - 1]))
		index--;
	newstr = ft_strnew(index);
	if (!newstr)
		return (NULL);
	ft_strncpy(newstr, cursor, index + 1);
	newstr[index] = 0;
	return (newstr);
}