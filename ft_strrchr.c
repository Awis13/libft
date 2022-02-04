/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:36:11 by Nipostni          #+#    #+#             */
/*   Updated: 2022/02/03 15:47:41 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	const char *strt = str;
	i = ft_strlen(strt);
	while (i >= 0)
	{
		if (strt[i] == ch)
		{
			return ((char *)strt + i);
		}
		i--;
	}
	return (0);
}

// int main(void)
// {
// 	const char str[] = "123456789";
// 	const char ch = '2';

// 	// ft_strrchr(str, ch);

// 	printf("String after |%c| is - |%s|\n", ch, ft_strrchr(str, ch));
// 	//printf("String after |%c| is - |%s|\n", ch, strrchr(str, ch));

// } 