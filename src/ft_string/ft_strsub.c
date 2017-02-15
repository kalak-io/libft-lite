/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:37:31 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:25:19 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function allocates (with malloc) and returns a new copy of a
**			section of the string passed as parameter. The section begins at the
**			start index and length len. If start and len do not designate a
**			section of chain valid, the behavior is undefined. If the allocation
**			fails, the function returns NULL.
**			This function returns the section of the string.
*/

#include "ft_string.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*snew;

	if (!s)
		return (NULL);
	if (!(snew = ft_strnew(len)))
		return (NULL);
	ft_memmove(snew, s + start, len);
	return (snew);
}
