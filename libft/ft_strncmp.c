/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:40:05 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/20 18:40:07 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while (index < n)
	{
		if (*s1 != *s2)
			return ((*s1 - *s2));
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
