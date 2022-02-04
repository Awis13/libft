/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:16:55 by Nipostni          #+#    #+#             */
/*   Updated: 2022/02/04 00:02:25 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h> 


size_t ft_delim_count(const char *s, char c)
{
	int	count;

	count = 0;

	while(*s++ == ' ')
		s++;
	while(*s++)
	{
		if (*s == c)
			count++;
	}
	printf("Count of delims — %d \n", count);
	return (count);
}

char **ft_split(char const *s, char c)
{
	int d_count = 0;
	char **tab;
	int i = 0;
	int str_count = 0;
	
	
	d_count = ft_delim_count(s, c);
	printf("Buffer - %s \n", s);
	if(!(tab = (char **)malloc(sizeof(char *) * (d_count + 1))))
		return(NULL);
	while (i <= d_count)
	{	
		while(*s++ != c)
			str_count++;
				
		if (!(tab[i] = (char *)malloc(sizeof(char) * (str_count + 1))))
			return(NULL);
		tab[i][str_count + 1] = '\0';
		ft_memcpy(tab[i], s - str_count - 1, str_count);
		i++;
		str_count = 0;
	}
	tab[d_count + 1] = NULL;
	return(tab);
}


 int main(void)
 {
 	char *str = " test dasd dsda";
 	char *d = " ";
	char **re = ft_split(str, *d);
	printf("%s", re[0]);
	
 }