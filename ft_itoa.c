/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:11:51 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/29 12:19:06 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		negative;
	int		integer_len;
	char	*str;
	long	number;

	if (n == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
		return (str);
	}
	negative = (n < 0) ? 1 : 0;
	integer_len = ft_intlen(n);
	str = ft_strnew(integer_len);
	number = (negative) ? (long)n * -1 : (long)n;
	while (number > 0)
	{
		str[--integer_len] = (int)(number % 10) + '0';
		number /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
