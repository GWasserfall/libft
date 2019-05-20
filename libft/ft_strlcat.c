/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:33:32 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/20 18:34:42 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	iterations;
	char	*ptr;

	iterations = dstsize - (size_t)strlen(dst) - 1;
	ptr = dst;
	ptr += strlen(dst);
	while (iterations > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		iterations--;
	}
	*(ptr) = '\0';
	return (iterations);
}
