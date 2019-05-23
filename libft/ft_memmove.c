/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:38:11 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/23 12:52:41 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		temp[n];
	const char	*source;
	char		*destination;
	int			index;
	
	//temp = (char *)malloc(n);
	source = (char *)src;
	destination = (char *)dest;
	index = 0;
	if (src == dest && n > 0)
		return (NULL);
	while (index < (int)n)
	{
		temp[index] = source[index];
		index++;
	}
	while (--index >= 0)
		destination[index] = temp[index];
	//free(temp);
	return (dest);
}
