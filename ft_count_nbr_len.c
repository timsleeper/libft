/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbr_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:21:09 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/15 19:54:16 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_nbr_len(int n)
{
	int				count;
	unsigned int	nbr;

	if (n == 0)
		return (1);
	count = 0;
	nbr = n;
	if (n < 0)
	{
		count++;
		nbr = -n;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return(count);
}
