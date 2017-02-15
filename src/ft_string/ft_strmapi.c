/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:36:04 by cjacquem          #+#    #+#             */
/*   Updated: 2016/05/27 16:29:55 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char const		*p;
	char			*snew;
	unsigned int	i;

	snew = NULL;
	if (s)
	{
		if (!(snew = ft_strnew(ft_strlen(s))))
			return (NULL);
		p = s;
		i = 0;
		while (*p)
		{
			snew[i] = f(i, *p++);
			++i;
		}
	}
	return (snew);
}
