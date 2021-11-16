/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:09:10 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/16 11:26:42 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str)
	{
		printf("%c", str[i]);
		i++;
	}
	return (i);
}

int main(void)
{
	char c[] = "E";
	printf("%d", ft_strlen(c));
}