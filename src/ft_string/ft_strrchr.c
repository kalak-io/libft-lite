/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 09:13:44 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/15 13:16:38 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function searches for the last occurrence of the character c
**			(an unsigned char) in the string pointed to, by the argument s.
**			This function returns a pointer to the last occurrence of character
**			in s.
**			If the value is not found, the function returns a null pointer.
*/

#include "ft_string.h"

char		*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*p;

	len = ft_strlen(s);
	p = (char*)s;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (p + len);
		--len;
	}
	return (NULL);
}
