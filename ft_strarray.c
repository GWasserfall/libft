/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:58:04 by gwasserf          #+#    #+#             */
/*   Updated: 2019/06/05 17:00:49 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strarray(size_t size)
{
	char **array;

	if (!(array = (char **)malloc(size * sizeof(char *) + 1)))
		return (NULL);
	array[size] = NULL;
	return (array);
}
