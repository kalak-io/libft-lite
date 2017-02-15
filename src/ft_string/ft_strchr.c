/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:57:26 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/13 17:39:14 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		This function searches for the first occurrence of the character c (an
**		unsigned char) in the string pointed to by the argument s.
**		This returns a pointer to the first occurrence of the character c in the
**		string s, or NULL if the character is not found.
*/

#include <stddef.h>

char		*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		++i;
	return (s[i] || !c ? (char*)&s[i] : NULL);
}
