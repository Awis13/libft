/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:00:52 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/01 14:20:00 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1 = (const unsigned char *)str1;
	const unsigned char	*s2 = (const unsigned char *)str2;

	while (n-- > 0)
	{
		if (*s1++ != *s2++)
		{
			if (s1[-1] < s2[-1])
				return (-1);
			else
				return (1);
		}
	}
	return (0);
}

//int main ()
//{
//  char buffer1[] = "DWgaOtP12df0";
//  char buffer2[] = "DWGAOTP12DF0";

//  int n;

//  n=memcmp ( buffer1, buffer2, sizeof(buffer1) );

//  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
//  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
//  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

//  return 0;
//}