/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:37:17 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/01 12:59:04 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *bigptr, int ch, unsigned int length)
{
	const char		*buffer = (const char *)bigptr;
	unsigned int	n;

	n = 0;
	while (n < length)
	{
		if (buffer[n] == ch)
			return ((void *)&buffer[n]);
		n++;
	}
	return (0);
}
