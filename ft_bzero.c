/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:58:42 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/16 15:52:15 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero (void *b, size_t length)
{
	ft_memset(b, 0, length * sizeof(char));
}

int	main(void)
{
	char str[20] = "1234567890";
	ft_bzero(str, 4);
	printf("%s\n", str);
	printf("%d\n", str[1]);

}
