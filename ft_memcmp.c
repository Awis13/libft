/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:00:52 by Nipostni          #+#    #+#             */
/*   Updated: 2022/01/03 17:12:51 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n != 0)
	{
		const unsigned char *sp1 = s1;
		const unsigned char *sp2 = s2;
		while (n != 0)
		{
			if (*sp1++ != *sp2++)
				return (*--sp1 - *--sp2);
			n--;
		}
	}
	return(0);
}

// int main ()
// {
// 	char *s1 = "AAAAAAAAAAA";
// 	char *s2 = "BBBBBBBBBBB";

	
// 	printf("Result is: %d", ft_memcmp(s1, s2, 5));
// }