/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:35:02 by cjacquem          #+#    #+#             */
/*   Updated: 2016/05/27 16:29:47 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_string.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char const	*p;
	char		*snew;

	snew = NULL;
	if (s)
	{
		if (!(snew = ft_strnew(ft_strlen(s))))
			return (NULL);
		p = s;
		while (*p)
		{
			snew[p - s] = f(*p);
			++p;
		}
	}
	return (snew);
}
