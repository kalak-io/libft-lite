/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:06:39 by cjacquem          #+#    #+#             */
/*   Updated: 2016/01/08 08:28:44 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!(s2 = ft_strnew(ft_strlen(s1))))
		return (NULL);
	return (ft_strcpy(s2, s1));
}
