/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:48:36 by Nipostni          #+#    #+#             */
/*   Updated: 2022/01/17 17:48:02 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	source_len;
	size_t	r_size;
	size_t	copy_l;
	size_t	d_len;

	source_len = ft_strlen(src);
	r_size = size;
	while (*dst && r_size > 0)
	{
		dst++;
		r_size--;
	}
	d_len = size - r_size;
	if (d_len < r_size)
	{
		copy_l = r_size - 1;
		if (source_len < copy_l)
		{
			copy_l = source_len;
		}
		ft_memcpy(dst, src, copy_l);
		dst[copy_l] = '\0';
	}
	return (d_len + source_len);
}

// int main(void)
// {
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	int size = 6; 
// 	ft_strlcat(dest, src, size);
// 	printf("%s", dest);

// }