/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:04:40 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/01 15:06:41 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**			This function compares at most the first n bytes of s1 and s2.
**			This function return values that are as follows:
**				if Return value < 0 then it indicates s1 is less than s2.
**				if Return value > 0 then it indicates s2 is less than s1.
**				if Return value = 0 then it indicates s1 is equal to s2.
*/

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	if (!n)
		return (0);
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	while (p_s1[i] && p_s2[i] && i < n - 1 && (p_s1[i] == p_s2[i]))
		++i;
	return (p_s1[i] - p_s2[i]);
}
