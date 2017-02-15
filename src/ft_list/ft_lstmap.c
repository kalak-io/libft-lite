/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:33:44 by cjacquem          #+#    #+#             */
/*   Updated: 2016/10/23 14:40:45 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;

	if (!lst || !f)
		return (NULL);
	if (!(map = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	map = f(map);
	if (lst->next)
		map->next = ft_lstmap(lst->next, f);
	return (map);
}
