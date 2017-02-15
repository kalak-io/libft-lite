/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:47:10 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/22 12:35:51 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function copies n characters from memory area src to memory
**			area dst.
**			This function returns a pointer to destination, which is dst.
*/

#include <stddef.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		((char*)dst)[n] = ((char*)src)[n];
	return (dst);
}
