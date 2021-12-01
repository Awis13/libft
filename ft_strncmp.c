/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:53:23 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/01 11:52:16 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

i = 0;
	while (*s1 && n && (*s1 == *s2))
	{
	s1++;
	s2++;
	n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}

//int main(void)
//{
//	char s1[20] = "test\200";
//	char s2[20] = "test\0";
//	printf("%d ", ft_strncmp(s1, s2, 6));
//}