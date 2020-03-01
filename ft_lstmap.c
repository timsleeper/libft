/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 22:30:23 by ftadeu-d          #+#    #+#             */
/*   Updated: 2020/02/29 22:40:14 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new;

	if (!f || !del)
		return (0);
	start = NULL;
	while (lst)
	{
		if (!(start = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(new, del);
			return (0);
		}
		ft_lstadd_back(new, start);
		lst = lst->next;
	}
	return (start)
}
