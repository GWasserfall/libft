/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:32:41 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/20 17:32:47 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*str;
	size_t	index;

	str = (char *)s;
	index = 0;
	while (index < n)
	{
		if (c == str[index])
			return (void *)&str[index];
		index++;
	}
	return (NULL);
}
