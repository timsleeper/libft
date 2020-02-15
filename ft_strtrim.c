/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:54:14 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/15 18:16:19 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	st;
	size_t	e;
	char	*dest;

	if (!s1 || !set)
		return (0);
	st = 0;
	while (s1[st] && ft_strchr(set, (int)s1[st]))
		st++;
	e = ft_strlen(s1 + st);
	if (e)
		while (s1[e + st - 1] != 0 && ft_strchr(set, (int)s1[e + st - 1]) != 0)
			e--;
	if (!(dest = (char *)malloc(sizeof(char) * (e + 1))))
		return (0);
	ft_strncpy(dest, s1 + st, e);
	dest[e] = '\0';
	return (dest);
}
