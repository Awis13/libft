/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:47:24 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/29 22:14:46 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long lon = n;
	if (lon < 0)
		{
			ft_putchar_fd('-', fd);
			lon = lon * -1;
		}
	if(lon >= 9)
		ft_putnbr_fd(lon / 10, fd);
	ft_putchar_fd((lon % 10) + '0', fd);
}

// int main(void)
// {
// 	// int n = -2147483648LL;
// 	int fd = 1;
// 	ft_putnbr_fd(123456, fd);
// }