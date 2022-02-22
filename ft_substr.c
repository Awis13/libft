/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:32:55 by Nipostni          #+#    #+#             */
/*   Updated: 2022/02/22 15:29:30 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*buf;
	int		index;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	index = start;
	if (ft_strlen(s) < start)
	{
		buf = (char *)malloc(sizeof(char));
		if (!buf)
			return (NULL);
		buf[0] = '\0';
		return (buf);
	}
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (!(buf))
		return (NULL);
	while (i < len)
		buf[i++] = s[index++];
	buf[i] = '\0';
	return (buf);
}
