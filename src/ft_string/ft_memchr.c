/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:06:12 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/15 16:01:44 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function returns a pointer to the matching byte or NULL if the
**			character does not occur in the given memory area.
*/

#include <stddef.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char*)s;
	while (n--)
	{
		if (*tmp == (unsigned char)c)
			return ((void*)tmp);
		++tmp;
	}
	return (NULL);
}
