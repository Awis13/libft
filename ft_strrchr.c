/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:36:11 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/25 16:43:47 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == ch)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}

// int main(void)
// {
// const char str[] = "00000000test0000    00013746=-=-=11!!!!0test123";
// const char ch = '1';

// ft_strrchr(str, ch);

// printf("String after |%c| is - |%s|\n", ch, ft_strrchr(str, ch));
// printf("String after |%c| is - |%s|\n", ch, strrchr(str, ch));

// } 