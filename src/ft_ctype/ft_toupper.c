/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:02:52 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 11:54:04 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
**			This function converts lowercase letter to uppercase.
**			This function returns uppercase equivalent to c, if such value
**			exists, else c remains unchanged. The value is returned as an int
**			value that can be implicitly casted to char.
*/

int			ft_toupper(int c)
{
	return (ft_islower(c) ? c - 32 : c);
}
