/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:48:36 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/24 17:05:47 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, size_t n);

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

//int main(void)
//{
//	char first[] = "This is ";
//    char last[] = "a potentially long string";
//    int size = 35; 
//	ft_strlcat(first, last, size);
//	printf("%s", first);
//}