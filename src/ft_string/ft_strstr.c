/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 09:35:27 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/15 13:17:05 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function function finds the first occurrence of the substring
**			s2 in the string s1. The terminating '\0' characters are
**			not compared.
**			This function returns a pointer to the first occurrence in s1
**			of any of the entire sequence of characters specified in s2, or
**			a null pointer if the sequence is not present in s1.
*/

#include "ft_string.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	l_s2;
	char	*p;

	p = (char*)s1;
	if (!*s2)
		return (p);
	l_s2 = ft_strlen(s2);
	while (*p)
	{
		if (ft_strnequ(p, s2, l_s2))
			return (p);
		++p;
	}
	return (NULL);
}
