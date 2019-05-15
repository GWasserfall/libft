/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 14:04:00 by event             #+#    #+#             */
/*   Updated: 2019/05/15 14:26:22 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int index;

	while (1)
	{
		if (s[index] == c)
			return (s[index]);
		if (s[index] == '\0')
			return NULL;
		index++;
	}
	return (NULL);
}
