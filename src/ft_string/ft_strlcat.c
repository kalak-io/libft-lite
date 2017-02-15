/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:03:39 by cjacquem          #+#    #+#             */
/*   Updated: 2016/05/13 11:07:23 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	if (n < l_dst)
		return (l_src + n);
	i = 0;
	while (l_dst + i < n - 1 && src[i])
	{
		dst[l_dst + i] = src[i];
		++i;
	}
	dst[l_dst + i] = '\0';
	return (l_src + l_dst);
}
