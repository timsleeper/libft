/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:41:40 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/03 21:32:38 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*first;

	first = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *first && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
