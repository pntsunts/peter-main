/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:20:03 by pntsunts          #+#    #+#             */
/*   Updated: 2019/06/06 15:51:47 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(char const *s1, char const *s2, int n)
{
	int		x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[x] != '\0' && s1[x] == s2[x] && x < n - 1)
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
