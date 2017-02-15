/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:38:44 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/01 15:34:52 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function appends the string pointed to by src to the end of the
**			string pointed to by dst up to n characters long.
**			This function returns a pointer to the resulting string dst.
*/

#include <stddef.h>

char		*ft_strncat(char *dst, const char *src, size_t n)
{
	char *const	save = dst;
	int			i;
	int			j;

	i = 0;
	while (dst[i])
		++i;
	j = 0;
	while (src[j] && n--)
	{
		dst[i + j] = src[j];
		++j;
	}
	dst[i + j] = '\0';
	return (save);
}
