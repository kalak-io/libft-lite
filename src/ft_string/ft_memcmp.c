/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 07:50:41 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/22 15:24:05 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		This function compares the first n bytes of memory area s1 and memory
**		area s2.
**		if Return value < 0 then it indicates s1 is less than s2.
**		if Return value > 0 then it indicates s2 is less than s1.
**		if Return value = 0 then it indicates s1 is equal to s2.
*/

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	while (n--)
	{
		if (*p_s1 != *p_s2)
			return (*p_s1 - *p_s2);
		p_s1++;
		p_s2++;
	}
	return (0);
}
