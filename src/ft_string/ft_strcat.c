/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:05:46 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 10:35:35 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function appends the string pointed to by src to the end of the
**			string pointed to by dst.
**			This function returns a pointer to the resulting string dst.
*/

#include "ft_string.h"

char		*ft_strcat(char *dst, const char *src)
{
	if (dst || src)
		ft_strcpy(dst + ft_strlen(dst), src);
	return (dst);
}
