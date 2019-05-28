/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:32:41 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/28 16:18:58 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		if (c == *str)
			return ((void *)str);
		if (c < 0)
			return ((void *)str + 1);
		else
			str++;
		n--;
	}
	return (NULL);
}
