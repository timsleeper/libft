/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:28:14 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/15 13:44:15 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	len;
	size_t	i;
	char	*dest;

	i = 0;
	len = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	len = l1 + l2;
	if (len == 0)
		return (0);
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < l1)
	{
		dest[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = s2[i - l1];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
