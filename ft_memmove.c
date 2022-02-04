/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:31:42 by Nipostni          #+#    #+#             */
/*   Updated: 2022/01/04 17:04:19 by nipostni         ###   ########.fr       */
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
	if (dst == NULL && src == NULL)
		return (NULL);
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
