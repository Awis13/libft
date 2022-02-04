/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:55:49 by Nipostni          #+#    #+#             */
/*   Updated: 2022/01/03 18:29:51 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (count * size);
	if (ptr)
		ft_bzero (ptr, count * size);
	else
		return (0);
	return (ptr);
}

// int main(void)
// {
// 	printf("%p ", ft_calloc(30, 1));
// 	printf("%p ", calloc(30, 1));

// }