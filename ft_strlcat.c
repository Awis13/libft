/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:48:36 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/24 17:05:47 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(const char *str);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
 int    i;
 unsigned int j;

 i = 0;
 j = 0;
 while (dest[j])
  j++;
 while (src[i] && (j < (size - 1)))
 {
  dest[j] = src[i];
  j++;
  i++;
 }
 dest[j] = '\0';
 return (j);
}

//int main(void)
//{
//	char first[] = "This is ";
//    char last[] = "a potentially long string";
//    int size = 25; 
//	ft_strlcat(first, last, size);
//	printf("%s", first);
//}