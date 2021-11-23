/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:31:42 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/17 14:45:15 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstt;
	char	*srct;
	int		i;

	i = 0;
	dstt = (char *) dst;
	srct = (char *) src;
	if (dstt > srct)
		i = n - 1;
	while (i >= 0)
	{
		dstt[i] = srct[i];
		i--;
	}
	if (srct > dstt)
	{
		i = 0;
		while (i < (int) n)
		{
			dstt[i] = srct[i];
			i++;
		}
	}
	return (dst);
}
