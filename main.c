/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:50:15 by Nipostni          #+#    #+#             */
/*   Updated: 2021/11/16 10:56:40 by Nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int argument);
int	ft_isdigit(int argument);
int	ft_isalnum(int argument);
int	ft_isascii(int argument);
int	ft_isprint(int argument);
unsigned int	ft_strlen(const char *str);
int	test_ft_isdigit(void);
int	test_ft_isalpha(void);
int	test_ft_isalnum(void);
int	test_ft_isascii(void);
int	test_ft_isprint(void);
int	test_ft_strlen(void);

int	main(void)
{
	test_ft_isalpha();
	printf("\n");
	test_ft_isdigit();
	printf("\n");
	test_ft_isalnum();
	printf("\n");
	test_ft_isascii();
	printf("\n");
	test_ft_isprint();
	printf("\n");
	test_ft_strlen();
	printf("\n");
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
	to_pass = '*';
	printf("%d, testing %c \n", ft_isalnum(to_pass), to_pass);
}

/* Testing ft_isalnum */
int	test_ft_isascii(void)
{
	int	to_pass;

	to_pass = '_';
	printf("*** ft_isdigit ***\n");
	printf("%d, testing %c \n", ft_isascii(to_pass), to_pass);
	to_pass = '1';
	printf("%d, testing %c \n", ft_isascii(to_pass), to_pass);
	to_pass = 'A';
	printf("%d, testing %c \n", ft_isascii(to_pass), to_pass);
	to_pass = '*';
	printf("%d, testing %c \n", ft_isascii(to_pass), to_pass);
}

/* Testing ft_isprint */
int	test_ft_isprint(void)
{
	int	to_pass;

	to_pass = '_';
	printf("*** ft_isprint ***\n");
	printf("%d, testing %c \n", ft_isprint(to_pass), to_pass);
	to_pass = '\f';
	printf("%d, testing unprintable %c \n", ft_isprint(to_pass), to_pass);
	to_pass = 'A';
	printf("%d, testing %c \n", ft_isprint(to_pass), to_pass);
	to_pass = '*';
	printf("%d, testing %c \n", ft_isprint(to_pass), to_pass);
}

/* Testing ft_strlen */
int	test_ft_strlen(void)
{
	char c[40] = "TEST TEST TEST!@#!@#!@#";
	printf("char to test TEST TEST TEST!@#!@#!@# - %d", ft_strlen(c));
}
