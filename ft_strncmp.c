/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:57:21 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/09 18:02:17 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:05:27 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/01/27 21:21:03 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIBFT.H"

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
		u1 = (unsigned char) *s1++;
		u2 = (unsigned char) *s2++;
		if (u1 != u2)
			return  (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}
