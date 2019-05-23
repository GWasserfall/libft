/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:37:34 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/23 15:16:50 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;
	//int *ptr;

	//ptr = (char *)s
	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == c)
			return (char *)&s[len];
		len--;
	}
	return (NULL);
}
