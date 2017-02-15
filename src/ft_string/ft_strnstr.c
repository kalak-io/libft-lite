/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:49:48 by cjacquem          #+#    #+#             */
/*   Updated: 2016/03/10 09:16:46 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*p;

	p = (char*)s1;
	i = 0;
	if (!s2[i])
		return (p);
	while (i < n && s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] && s1[i] && s2[j] && i + j < n)
			{
				if (!s2[j + 1])
					return (p + i);
				++j;
			}
		}
		++i;
	}
	return (NULL);
}
