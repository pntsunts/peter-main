/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:17:32 by pntsunts          #+#    #+#             */
/*   Updated: 2019/06/22 05:58:31 by pntsunts         ###   ########.fr       */
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
void ft_p(char * c)
{
	*c = 'A';
}
void ft_pu(unsigned int b, char * c)
{
	if (b == 2 || b == 4)
		*c = 'A';
}
void ite()
{
	char str[] = "PETER";
	ft_striter(str, ft_p);
	printf("%s\n", str);
}
void iteri()
{
	char str[] = "PETER";
	ft_striteri(str, ft_pu);
	printf("%s\n", str);
}
char ft_map(char c)
{
	c = 'v';
	return (c);
}
void stmap()
{
	char str[] = "Khanyisa";
	char *s;
	s = ft_strmap(str, ft_map);
	printf("%s", s);
	free(s);
}
void join()
{
	char str[] = "PETER";
	char str2[] = " NTSUNTSHA";
	char *s;
	s = ft_strjoin(str, str2);
	printf("%s\n", s);
}
void trim()
{
	char str[] = "	         ***PETER ** NTSUNTSHA			";
	char *res;
	res = ft_strtrim(str);
	printf("%s", res);
}
void equal()
{
	char s1[] = "peter";
	char s2[] = "peter";
	printf("%d",ft_strequ(s1, s2));
}
void new()
{
	char *s; 
	s = ft_strnew(5);
	int i = 0;
	while (i < 5)
	{
		s[i] = 'a';
		i++;
	}
	printf("%s",s);
	free(s);
}
void cmp()
{
	char st1[] = "PETER";
	char st2[] = "PETER";	
	if (ft_memcmp(st1, st2, 5) == 0)
	{
		printf("equal");
	}
	else 
	{
		printf("not equal");
	}
}
void ccpy()
{
	char s1[] = "PETERNTSUNTSHA";
	char s2[] = "WETHINKCODEFOR";
	char a = 'I';
	char *res;
	res = ft_memccpy(s1, s2, a, 14);
	printf("%s", res);
}
void cat()
{
	char s1[] = "PETER";
	char s2[] = " NTSUNTSHA";
	char *res;
	res = ft_strncat(s1, s2, 5);
	printf("%s", res);
}
void lcat()
{
	char st1[] = "PETER";
	char st2[] = "NTSUNTSHA";
	printf("%zu", ft_strlcat(st1, st2, 6));
}
int main()
{/*
	nbr();
	set();
	move();
	bz();
	mech();
	split();
	ite();
	iteri();
	stmap();
	join();
	trim();
	equal()
	new();
	cmp();
	ccpy();
	cat();*/
	lcat();
	return (0);
}
