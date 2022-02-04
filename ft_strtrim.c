/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:41:45 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/09 11:14:28 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#include "libft.h"

char* ft_strtrim(char const* s1, char const* set)
{
	size_t	i;
	size_t	len_s;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		len_s = ft_strlen(s1);
		while (s1[i] != 0 && ft_strchr(set, s1[i]) != 0)
			i++;
		while (s1[len_s - 1] != 0 && ft_strchr(set, s1[len_s - 1]) != 0 && len_s > i)
			len_s--;
		str = (char*)malloc(sizeof(char) * (len_s - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], len_s - i + 1);
	}
	return (str);
}

// int main(void)
// {
// 	char *s1 = "TEeeEST111e11ab11111";
// 	char *set = "a";
// 	printf("%s", ft_strtrim(s1, set));
// }