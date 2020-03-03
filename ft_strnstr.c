/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:03:49 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/02 15:55:02 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the first occurence of needle in haystack, limited by len
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hlen;
	size_t	nlen;

	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (!*needle || !ft_strncmp(haystack, needle, nlen))
		return ((char *)haystack);
	while (nlen <= hlen && *haystack && len > nlen)
	{
		if (!ft_strncmp(haystack, needle, nlen))
			return ((char *)haystack);
		++haystack;
		--hlen;
		--len;
	}
	return (0);
}
