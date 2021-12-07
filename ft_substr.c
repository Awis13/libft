/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:32:55 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/07 16:05:37 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL)
		return (NULL);
	int len_to_return = len - start;
	char *dest = (char *)malloc(sizeof(s) * (len_to_return + 1));
	if (!dest)
		return (0);
	ft_memcpy(dest, (s + start), len_to_return);
	dest[len] = '\0';
	return (dest);
	
}

int main()
{
    char src[] = "lorem ipsum dolor sit amet";
 
    int start = 0;
    int len = 10;
 
    char* dest = ft_substr(src, start, len);
 
    printf("%s\n", dest);
 
    return 0;
}