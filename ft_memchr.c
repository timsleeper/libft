/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:34:03 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/03 20:42:41 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the first occurence of c converted to char in the string s
** within the initial n characters.
** Returns null if not found.
*/

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char*)p)[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (0);
}
