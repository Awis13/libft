/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:15:54 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/17 14:09:04 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcc;
	char	*destc;
	int		i;

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
