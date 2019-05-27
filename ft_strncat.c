/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:37:28 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/20 18:38:10 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t index;
	size_t slen;

	slen = ft_strlen(dest);
	index = 0;
	while (index < n)
	{
		dest[index + slen] = src[index];
		if (!src[index])
		{
			dest[index + slen + 1] = '\0';
			break ;
		}
		index++;
	}
	return (dest);
}
