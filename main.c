/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:17:32 by pntsunts          #+#    #+#             */
/*   Updated: 2019/06/18 15:36:41 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void nbr()
{
	ft_putnbr(-2147483648);
	printf("\n");
}
void set()
{
	char str[] = "PETER";
	printf("%s\n", ft_memset(str, '0', 3));
}
void move()
{
	char st[] = "PETER";
	char st2[] = "NTOMBI";
	char *result;
	result = ft_memmove(st, st2, 4);
	printf("%s\n",result);
}
void bz()
{
	char str[] = "PETER";
	ft_bzero(str, 5);
	printf("%s\n", str);
}
void mech()
{
	char st[] = "PETER";
	char st2 = 'T';
	printf("%s\n", ft_memchr(st, st2, 5));
}
void split()
{
	char str[] = "**coding**wethinkcode**peter*is*life**and**great***";
	char st = '*';
	char **res;
	int i = 0;
	res = ft_strsplit(str, st);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}

int main()
{
	nbr();
	set();
	move();
	bz();
	mech();
	split();
	return (0);
}


