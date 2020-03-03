/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 21:22:44 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/02 15:37:38 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies no more that n bytes from src to dst stopping if "c" is found
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	if (!p)
	{
		ft_memcpy(dst, src, n);
		return (0);
	}
	ft_memcpy(dst, src, p - src + 1);
	return (dst + (p - src + 1));
}
