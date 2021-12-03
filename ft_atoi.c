/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:25:03 by nipostni          #+#    #+#             */
/*   Updated: 2021/12/03 11:13:20 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
	int i;
	long number;
	char sign;

	number = 0;
	i = 0;
	sign = 1;
	
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\v')
			i++;

	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if(nptr[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}

	return(number * sign);
	
}

// int main(void)
// {
// 	char c[30] = "469";
// 	printf("%d My Atoi \n", ft_atoi(c));
// 	printf("%d System Atoi \n", atoi(c));
// }