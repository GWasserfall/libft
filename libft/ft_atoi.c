/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 09:00:12 by event             #+#    #+#             */
/*   Updated: 2019/05/23 11:40:43 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	long result;
	long sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str) || *str == '+')
		str++;
	if (*str == '-' && (sign = -1))
		str++;
	while (*str >= '0' && *(str) <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	result *= sign;
	if (result > INTMAX)
		return (-1);
	else if (result < INTMIN)
		return (0);
	else
		return (int)result;
}
