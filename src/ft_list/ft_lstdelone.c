/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:31:15 by cjacquem          #+#    #+#             */
/*   Updated: 2016/10/20 11:58:50 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_list.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !(*alst))
		return ;
	del((*alst)->content, (*alst)->content_size);
	(*alst)->prev = NULL;
	(*alst)->next = NULL;
	ft_memdel((void**)alst);
}
