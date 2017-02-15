/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 07:06:24 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:52:45 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_string.h"

static size_t	ft_llen(long n)
{
	size_t	i;

	i = (n == 0) ? 1 : 0;
	if (n < 0)
	{
		n = -n;
		++i;
	}
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	x;
	size_t	l;
	char	*s;

	x = (long)n;
	l = ft_llen(x);
	if (!(s = ft_strnew(l)))
		return (NULL);
	if (x < 0)
		x = -x;
	while (l)
	{
		s[--l] = x % 10 + '0';
		x /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
