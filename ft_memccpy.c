/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 21:22:44 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/03 20:47:56 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies no more that n bytes from src to dst stopping if "c" is found
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	s = src;
	d = dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i++] == (unsigned char)c)
			return (dst + i);
	}
	return (0);
}
