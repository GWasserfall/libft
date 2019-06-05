/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:32:41 by gwasserf          #+#    #+#             */
/*   Updated: 2019/06/05 10:52:49 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	l;

	l = (unsigned char)c;
	str = (unsigned char *)s;
	while (n)
	{
		if (l == *str)
			return ((void *)str);
		if (l < 0)
			return ((void *)str + 1);
		else
			str++;
		n--;
	}
	return (NULL);
}
