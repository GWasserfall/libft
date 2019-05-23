/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:11:51 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/20 17:13:18 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length(long n)
{
	int counter;
	if (n < 0)
	{

	}
}

char	*ft_itoa(int n)
{
	long number;
	number = (long)n;
}


char	*ft_itoa2(int n)
{
	int		negative;
	char	*str;

	str = &ft_strnew(13)[11];
	if ((negative = 0) || ((n < 0) && (n *= -1)))
		negative = 1;
	if (!str)
		return (NULL);
	while (n > 0)
	{
		*str-- = (n % 10) + '0';
		n /= 10;
	}
	if (negative == 1)
		*str-- = '-';
	return (++str);
}


#include <stdlib.h>
#include <stdio.h>

int number(long n)
{
  int counter;
  counter = 0;
  if (n < 0 )
  {
    counter++;
    n *= -1;
  }
    
  while (n > 0)
  {
    counter++ ;
    n /= 10;
  }
  return (counter);
}

void fill(char *str, int *index, int number)
{
  printf("%d) %d\n", index, number);
  int check;
  check = index;
  if (number >= 10)
  {
    fill(str, index, number / 10);
    fill(str, index, number % 10);
  }
  else
  {
    str[*index] = number + '0';
    *index = *index + 1;
  }
}

char *ft_itoa(int n)
{
  char *str;
  int len;
  int index;
  index = 0;
  
  len = number((long)n);
  str = malloc(len + 1);
  
  if (n < 0)
  {
    n *= -1;
    *str = '-';
    str++;
  }
  
  fill(str, &index, n);
  str[index] = '\0';
}

int main()
{
  ft_itoa(-2147483648);
  return (0);
}