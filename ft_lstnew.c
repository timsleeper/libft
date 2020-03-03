/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:27:37 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/03/02 15:35:28 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc and return a new element
*/

t_list		*ft_lstnew(void *content)
{
	t_list	*res;

	if (!(res = malloc(sizeof(t_list))))
		return (0);
	res->content = content;
	res->next = NULL;
	return (res);
}
