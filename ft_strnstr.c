/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:03:49 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/11 22:44:51 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
