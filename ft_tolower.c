/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:27:37 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/25 13:33:39 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	else
		return (ch);
}

//int main(void)
//{
//	char ch = 'B';
//	printf("%c after function call is — %c ", ch, ft_tolower(ch));
//}