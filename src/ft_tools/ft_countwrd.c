/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwrd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 18:25:42 by cjacquem          #+#    #+#             */
/*   Updated: 2016/12/07 12:50:01 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_countwrd(char const *s, char c)
{
	size_t	ret;
	int		i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			++i;
		else
		{
			while (s[i] && s[i] != c)
				++i;
			++ret;
		}
	}
	return (ret);
}
