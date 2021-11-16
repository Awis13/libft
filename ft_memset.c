/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:21:57 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/16 14:38:26 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	char *p = s;
	int i = 0;
	while (n--)
	{
		*p++ = c;
	}
}

int main(void)
{
	char str[20] = "1234567890";
	ft_memset(str, 'A', 2);
	printf("%s", str);
}