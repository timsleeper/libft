/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:25:02 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/02 14:57:29 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creates an array and fills it by converting a number to text.
*/

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	unsigned int	nbr;
	int				neg;

	neg = 0;
	size = ft_count_nbr_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	str[size] = '\0';
	nbr = n;
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
		neg = 1;
	}
	size--;
	while (size >= (neg ? 1 : 0))
	{
		str[size] = nbr % 10 + '0';
		nbr /= 10;
		size--;
	}
	return (str);
}
