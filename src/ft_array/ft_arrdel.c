/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 14:57:16 by cjacquem          #+#    #+#             */
/*   Updated: 2016/12/07 12:54:33 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

void		ft_arrdel(char **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_strdel(&(arr[i]));
		++i;
	}
	free(arr);
	arr = NULL;
}
