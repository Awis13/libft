/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:34:55 by Nipostni          #+#    #+#             */
/*   Updated: 2022/02/03 15:48:53 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str)
	{
		if (str[i] == ch)
		{
			return ((char *)str + i);
		}
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return ((char *) str);
}

//int main(void)
//{
//const char str[] = "        sadadasd00000000test123";
//const char ch = ' ';

//ft_strchr(str, ch);

//printf("String after |%c| is - |%s|\n", ch, ft_strchr(str, ch));
//printf("String after |%c| is - |%s|\n", ch, strchr(str, ch));

//} 