/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:03:49 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/10 20:32:24 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char 	*h;
	char	*n;
	size_t	l;

	h = (char *)haystack;
	n = (char *)needle;
	l = ft_strlen(needle);
	if (len == 0 || !haystack || !needle)
		return (h);
	while (h == ft_strchr(h, n[0]))
	{
		if (!ft_strncmp(h, n, l))
			return (h);
		h++;
	}
	return (0);
}
