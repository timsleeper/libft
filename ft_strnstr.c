/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:03:49 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/08 17:00:15 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the first occurence of needle in haystack, limited by len
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_l;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_l = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= needle_l)
		if (*haystack == *needle && ft_memcmp(haystack, needle, needle_l) == 0)
			return ((char *)haystack);
		else
			haystack++;
	return (NULL);
}
