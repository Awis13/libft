/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:50:15 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/15 14:01:21 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int argument);

int	main(void)
{
	int	to_pass;

	to_pass = '_';
	printf("*** ft_isalpha ***\n");
	printf("%d, testing %c \n", ft_isalpha(to_pass), to_pass);
	to_pass = '1';
	printf("%d, testing %c \n", ft_isalpha(to_pass), to_pass);
	to_pass = 'A';
	printf("%d, testing %c \n", ft_isalpha(to_pass), to_pass);
	to_pass = 'g';
	printf("%d, testing %c \n", ft_isalpha(to_pass), to_pass);
}
