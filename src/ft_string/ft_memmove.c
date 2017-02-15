/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 07:37:38 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/19 11:23:49 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function copies n characters from src to dst, but for
**			overlapping memory blocks, memmove() is a safer approach than
**			memcpy().
**			This function returns a pointer to the destination, which is dst.
*/

#include <stddef.h>

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	if (n)
	{
		p_src = (unsigned char*)src;
		p_dst = (unsigned char*)dst;
		if (p_src < p_dst)
		{
			p_dst += n;
			p_src += n;
			while (n--)
				*--p_dst = *--p_src;
		}
		else
			while (n--)
				*p_dst++ = *p_src++;
	}
	return (dst);
}
