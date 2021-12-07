/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:20:58 by Nipostni          #+#    #+#             */
/*   Updated: 2021/12/07 12:37:28 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		len;
	char	*t;

	len = ft_strlen(s);
	t = malloc(len + 1);
	ft_memcpy(t, s, len);
	t[len] = '\0';
	return (t);
}

//int main(void)
//{
//    const char *s1 = "String";
//    char *s2 = ft_strdup(s1);
//	printf("%s, %s", s1, s2);
//}