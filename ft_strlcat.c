/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:49:41 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/03 21:15:07 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	p;
	size_t	q;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	p = ft_strlen(dst);
	q = 0;
	while (src[q] != '\0' && p + 1 < dstsize)
	{
		dst[p] = src[q];
		p++;
		q++;
	}
	dst[p] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[q]));
}
