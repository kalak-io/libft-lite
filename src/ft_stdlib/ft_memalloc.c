/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:24:42 by cjacquem          #+#    #+#             */
/*   Updated: 2016/12/07 12:47:17 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh_mem;

	if (!(fresh_mem = malloc(size)))
		return (NULL);
	ft_bzero(fresh_mem, size);
	return (fresh_mem);
}
