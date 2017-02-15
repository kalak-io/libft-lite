/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:37:28 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:42:27 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function writes a character (an unsigned char) specified by the
**			argument char to stdout.
*/

#include "ft_puts.h"

void		ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
