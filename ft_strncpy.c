/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:08:40 by pntsunts          #+#    #+#             */
/*   Updated: 2019/05/30 14:39:07 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *s1, char *s2, int n)
{
	int		x;

	x = 0;
	while (x < n && s2[x])
	{
		s1[x] = s2[x];
		x++;
	}
	while (x < n)
	{
		s1[x] = '\0';
		x++;
	}
	return (s1);
}
