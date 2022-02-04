/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:37:41 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/31 00:52:18 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		str = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		str[s1_len + s2_len] = '\0';
		return (str);
	} else {
		return (NULL);
	}

}

// int main(void)
// {
// 	char *s1 = "lorem ipsum";
// 	char *s2 = "dolor sit amet";
// 	printf("%s", ft_strjoin(s1, s2));
// }