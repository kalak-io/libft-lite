/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:32:35 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/01 12:32:40 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstadd(t_list **alst, t_list *new_elem)
{
	if (!new_elem)
		return ;
	if (*alst)
	{
		new_elem->next = *alst;
		(*alst)->prev = new_elem;
	}
	*alst = new_elem;
}
