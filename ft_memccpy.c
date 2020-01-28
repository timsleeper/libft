/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 21:22:44 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/01/27 21:45:10 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIBFT.H"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	void unsigned char *p;

	p = ft_memchr(src, c, n);
	if (p != 0)

}
