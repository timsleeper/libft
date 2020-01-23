/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:25:20 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/01/22 22:06:22 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIBFT.H"

/*
** Returns the length of string pointed by s.
*/

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (i != '\0')
		i++;
	return (i);
}
