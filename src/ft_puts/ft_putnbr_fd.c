/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:38:41 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:43:28 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

void	ft_putnbr_fd(int n, int fd)
{
	long l;

	if (fd >= 0)
	{
		l = (long)n;
		if (l < 0)
		{
			ft_putchar_fd('-', fd);
			l *= -1;
		}
		if (l >= 10)
		{
			ft_putnbr_fd(l / 10, fd);
			ft_putchar_fd((l % 10) + '0', fd);
		}
		else
			ft_putchar_fd(l + '0', fd);
	}
}
