/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:38:43 by cjacquem          #+#    #+#             */
/*   Updated: 2016/10/17 14:01:43 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function allocates (with malloc) and returns a string of
**			characters terminated by a '\ 0' resulting from the concatenation of
**			s1 and s2. If the allocation fails, the function returns NULL.
**			This function returns a new string of characters.
*/

#include <stddef.h>
#include "ft_string.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*snew;
	size_t	l1;
	size_t	l2;

	snew = NULL;
	if (s1 && s2)
	{
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		if (!(snew = ft_strndup(s1, l1 + l2)))
			return (NULL);
		ft_strncat(snew, s2, l2);
		snew[l1 + l2] = '\0';
	}
	return (snew);
}
