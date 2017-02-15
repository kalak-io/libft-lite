/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:08:54 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/01 12:33:57 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function copies up to n characters from the string pointed to,
**			by src to dst. In a case where the length of src is less than that
**			of n, the remainder of dst will be padded with null bytes.
**			This function returns the final copy of the copied string.
*/

#include "ft_string.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *const	save = dst;
	int			i;

	if (ft_strlen(src) < n)
		ft_bzero(dst, n);
	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		++i;
	}
	return (save);
}
