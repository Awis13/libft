/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:50:15 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/15 14:43:58 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int argument);
int	ft_isdigit(int argument);
int	ft_isalnum(int argument);
int	test_ft_isdigit(void);
int	test_ft_isalpha(void);
int	test_ft_isalnum(void);

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
}

/* Testing ft_isalpha */
int	test_ft_isalpha(void)
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
	printf("\n");
}

/* Testing ft_isdigit */
int	test_ft_isdigit(void)
{
	int	to_pass;

	to_pass = '_';
	printf("*** ft_isdigit ***\n");
	printf("%d, testing %c \n", ft_isdigit(to_pass), to_pass);
	to_pass = '1';
	printf("%d, testing %c \n", ft_isdigit(to_pass), to_pass);
	to_pass = 'A';
	printf("%d, testing %c \n", ft_isdigit(to_pass), to_pass);
	to_pass = '6';
	printf("%d, testing %c \n", ft_isdigit(to_pass), to_pass);
}

/* Testing ft_isalnum */
int	test_ft_isalnum(void)
{
	int	to_pass;

	to_pass = '_';
	printf("*** ft_isdigit ***\n");
	printf("%d, testing %c \n", ft_isalnum(to_pass), to_pass);
	to_pass = '1';
	printf("%d, testing %c \n", ft_isalnum(to_pass), to_pass);
	to_pass = 'A';
	printf("%d, testing %c \n", ft_isalnum(to_pass), to_pass);
	to_pass = '6';
	printf("%d, testing %c \n", ft_isalnum(to_pass), to_pass);
}
