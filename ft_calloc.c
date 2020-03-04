/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:14:37 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/02 22:40:33 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Creates a pointer with malloc and the fills it with zeros.
*/

void		*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(size * count)))
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
