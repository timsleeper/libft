/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:53:39 by exam              #+#    #+#             */
/*   Updated: 2020/03/02 14:32:03 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates over the string ignoring spaces. Gets the first sign it finds.
** If a digit is found, keeps adding to variable res.
*/

int	ft_atoi(const char *str)
{
	long int	res;
	int			sign;
	int			i;
	char		*init;

	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	sign = str[i] == '-' ? -1 : 1;
	init = sign == -1 || str[i] == '+' ?
		(char *)str + (i + 1) : (char *)str + i;
	i = 0;
	while (ft_isdigit(init[i]))
	{
		res = res * 10 + init[i] - '0';
		i++;
	}
	return ((int)(res * sign));
}
