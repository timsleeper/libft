/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:41:03 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/09 18:50:32 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!len || (dst == NULL && src == NULL))
		return (dst);
	if (s < d)
	{
		while (len-- > 0)
		{
			*(d + len) = *(s + len);
		}
	}
	else
	{
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dst);
}
