/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                       +#+  +:+       +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 09:00:12 by event             #+#    #+#             */
/*   Updated: 2019/05/15 09:00:16 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;

	while (*str == '\n' || *str == ' ' || *str == '\t' 
		|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');	
		str++;
	}

	return result * sign;
}
