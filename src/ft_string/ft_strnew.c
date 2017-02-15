/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:24:01 by cjacquem          #+#    #+#             */
/*   Updated: 2016/01/08 11:00:48 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_stdlib.h"

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(sizeof(char) * (size + 1)));
}
