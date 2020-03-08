/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:14:37 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/08 15:29:35 by ftadeu-d         ###   ########.fr       */
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
	size_t	total_size;

	total_size = size * count;
	if (!(ptr = malloc(total_size)))
		return (0);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
