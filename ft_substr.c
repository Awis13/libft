/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:32:55 by Nipostni          #+#    #+#             */
/*   Updated: 2022/01/24 13:21:28 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *buf;
	int index;
	size_t i;
	size_t len_s;
	
	if (!s)
		return (NULL);

	i = 0;
	len_s = ft_strlen(s);
	index = start;

	
	if (len_s < start) 
	{
		if (!(buf = malloc(sizeof(char) * 1)))
 			return (NULL);
 		buf[0] = '\0';
 		return (buf);

	}

	if (!(buf = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		buf[i] = s[index];
		i++;
		index++;
	}
	buf[i] = '\0';
	return(buf);
}

// int main()
// {
//    char src[] = "hello everyone !";
 
//    int start = 50;
//    int len = 20;
 
//    char* result = ft_substr(src, start, len);
 
//    printf("%s\n", result);
 
//    return 0;
// }