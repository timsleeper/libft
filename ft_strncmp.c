/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:57:21 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/09 18:52:39 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares s1 and s2 until they are different.
** Returns integer >, = or < than 0 according to (s1 - s2)
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char u1;
	unsigned char u2;

	while (n-- > 0)
	{
		u1 = (unsigned char)*s1++;
		u2 = (unsigned char)*s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}
