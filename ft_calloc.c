/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:55:49 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/07 11:38:37 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = size;
	}
	ptr = malloc (count * size);
	if (ptr)
		ft_bzero (ptr, count * size);
	return (ptr);
}

//int main(void)
//{
//	printf("%p ", ft_calloc(30, 1));
//	printf("%p ", calloc(30, 1));
//}