/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:06:18 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/15 14:10:21 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int argument)
{
	char	c;

	c = argument + 0;
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
