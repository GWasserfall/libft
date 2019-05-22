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

#include <string.h>

size_t
ft_strlcat(char * restrict dst, const char * restrict src, size_t maxlen) {
    const size_t srclen = strlen(src);
    const size_t dstlen = strnlen(dst, maxlen);
    if (dstlen == maxlen) return maxlen+srclen;
    if (srclen < maxlen-dstlen) {
        memcpy(dst+dstlen, src, srclen+1);
    } else {
        memcpy(dst+dstlen, src, maxlen-1);
        dst[dstlen+maxlen-1] = '\0';
    }
    return dstlen + srclen;
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
	
// }

// int main() {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

// 	printf("Should only copy %d bytes with null termination\n", (int)max);

// 	printf("%d\n", (int)sizeof(buff1));

// 	printf("Return : %d\n", (int)strlcat(buff1, str, 29));

// 	printf("Result :: >%s<\n", buff1);
// 	ft_strlcat(buff2, str, max);


	

//   return 0;
// }