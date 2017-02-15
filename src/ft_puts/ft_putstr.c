/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:49:06 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:43:41 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function writes a string to stdout up to but not including the
**			null character. A newline character is appended to the output.
*/

#include "ft_puts.h"

void		ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}
