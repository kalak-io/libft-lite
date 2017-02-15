/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:42:47 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 14:55:02 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_string.h"
#include "ft_stdlib.h"
#include "ft_array.h"
#include "ft_tools.h"

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	t;
	size_t	l;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	t = ft_countwrd(s, c);
	if (!(tab = (char**)ft_memalloc(sizeof(char*) * (t + 1))))
		return (NULL);
	while (i < t)
	{
		while (*s && *s == c)
			++s;
		l = ft_wrdlen(s, c);
		if (!(tab[i] = ft_strndup(s, l)))
		{
			ft_arrdel(tab, ft_arrlen(tab));
			return (NULL);
		}
		s += l;
		++i;
	}
	return (tab);
}
