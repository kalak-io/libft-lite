/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 07:27:46 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 10:43:47 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function copies the character c (an unsigned char) to the first
**			n characters of the string pointed to, by the argument b.
**			This function returns a pointer to the memory area b.
*/

#include <stddef.h>

void		*ft_memset(void *b, int c, size_t n)
{
	while (n--)
		((char*)b)[n] = (unsigned char)c;
	return (b);
}
