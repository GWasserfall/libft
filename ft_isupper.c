/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:22:40 by gwasserf          #+#    #+#             */
/*   Updated: 2019/06/07 16:46:26 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (c > 127)
		return (0);
	return (c >= 'A' && c <= 'Z');
}
