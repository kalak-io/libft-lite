/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:17:36 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/01 13:50:41 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
**			This function converts the string argument str to an integer (int).
**			This function returns the converted integral number as an int value.
**			If no valid conversion could be performed, it returns zero.
*/

int			ft_atoi(const char *s)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i] && ft_isspace(s[i]))
		++i;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '-' || s[i] == '+')
		++i;
	while (s[i] && ft_isdigit(s[i]))
	{
		nb *= 10;
		nb += (s[i] - '0');
		++i;
	}
	return (sign * nb);
}
