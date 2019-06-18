/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:07:59 by pntsunts          #+#    #+#             */
/*   Updated: 2019/05/30 11:50:30 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char *x;
	unsigned char *y;

	x = (unsigned char*)s1;
	y = (unsigned char*)s2;
	if (x == y)
		return (s1);
	if (y < x)
	{
		y = (unsigned char*)s2 + n - 1;
		x = s1 + n - 1;
		while (n--)
			*x-- = *y--;
	}
	else
	{
		while (n--)
			*x++ = *y++;
	}
	return (s1);
}
