/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:46:58 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/16 10:48:37 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int argument)
{
	char	c;

	c = argument + 0;
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
