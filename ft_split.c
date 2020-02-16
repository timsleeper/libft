/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 13:46:06 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/16 15:04:16 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_segments(char const *str, char c)
{
	int		segments;
	int		tmp;

	segments = 0;
	tmp = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			tmp = 0;
		else if (tmp == 0)
		{
			tmp = 1;
			segments++;
		}
		str++;
	}
	return (segments);
}

static int	num_chr(char const *str, char c, int i)
{
	int		len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	**free_mem(char const **dest, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dest[j]);
	}
	free(dest);
	return (0);
}

static char	**breakstr(char const *s, char **dest, char c, int segments)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < segments)
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (!(dest[j] = (char *)malloc(sizeof(char) * (num_chr(s, c, i) + 1))))
			return (free_mem((char const **)dest, j));
		while (s[i] != '\0' && s[i] != c)
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char		**ft_split(char const *s, char c)
{
	char	**dest;
	int		segments;

	if (s == 0)
		return (0);
	segments = num_segments(s, c);
	if (!(dest = (char **)malloc(sizeof(char *) * (segments + 1))))
		return (0);
	return (breakstr(s, dest, c, segments));
}
