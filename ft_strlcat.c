/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:33:32 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/28 16:31:33 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen = strlen(dst);
	size_t srclen = strlen(src);

	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	dst += dstlen;
	
	memcpy(dst,  src, dstsize - dstlen - 1);
	dst[dstsize - dstlen - 1] = 0;

	return (srclen + dstlen);
}
