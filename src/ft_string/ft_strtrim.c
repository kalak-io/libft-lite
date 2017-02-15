/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:39:24 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/01 09:43:19 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		Allocates and returns a copy of the given string as a parameter without
**		white space at the beginning and end of this chain. It is considered
**		whitespace character ' ', '\ n' and '\ t'. If s contains no white spaces
**		at the beginning or end, the function returns a copy of s. If the
**		allocation fails, the function returns NULL.
**		Return a new fresh string without white space.
*/

#include "ft_string.h"
#include "ft_ctype.h"

char	*ft_strtrim(const char *s)
{
	int		start;
	int		end;
	int		len;
	char	*snew;

	snew = NULL;
	if (s)
	{
		start = 0;
		end = ft_strlen(s) - 1;
		while (ft_isblank(s[start]) || s[start] == '\n')
			++start;
		while (ft_isblank(s[end]) || s[end] == '\n')
			--end;
		if ((len = end - start + 1) < 0)
			len = 0;
		return (snew = ft_strsub(s, start, len));
	}
	return (snew);
}
