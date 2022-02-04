/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:15:54 by Nipostni          #+#    #+#             */
/*   Updated: 2022/01/04 16:46:22 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcc;
	char	*destc;
	int		i;

	if (!dest && !src)
		return (0);
	srcc = (char *)src;
	destc = (char *)dest;
	i = 0;
	while (n > 0)
	{
		destc[i] = srcc[i];
		n--;
		i++;
	}
	return (dest);
}

// int main (void)
// {
// 	char s1[50] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
// 	char s2[50] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	printf("%s", (char *)ft_memcpy(s1, s2, 50));
// }