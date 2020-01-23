/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:34:03 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/01/22 22:42:19 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIBFT.H"

/*
** Finds the first occurence of c converted to char in the string s
** within the initial n characters.
** Returns null if not found.
*/

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (0);
}
