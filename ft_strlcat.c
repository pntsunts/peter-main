/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:18:41 by pntsunts          #+#    #+#             */
/*   Updated: 2019/06/12 14:45:14 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while (s1[x] && x < n)
		x++;
	while ((s2[y] && (x + y + 1) < n))
	{
		s1[x + y] = s2[y];
		y++;
	}
	if (x + y < n)
		s1[x + y] = '\0';
	return (x + ft_strlen(s2));
}
