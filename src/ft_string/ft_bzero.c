/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:38:23 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/12 12:38:12 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		This function sets to 0 (bytes containing '\ 0' ) the first n bytes
**		of the block pointed to by s .
*/

#include "ft_string.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
