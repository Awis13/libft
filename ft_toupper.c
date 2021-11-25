/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:06:59 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/25 13:30:37 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	else
		return (ch);
}

//int main(void)
//{
//	char ch = '^';
//	printf("%c after function call is — %c ", ch, toupper(ch));
//}