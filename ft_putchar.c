/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:10:51 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/01/22 22:04:48 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LIBFT.FT"
#include <unistd.h>

/*
** Prints a single char to standard output (fd = 1)
*/

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}
