/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 07:45:14 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 11:53:18 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
**			This function converts a given letter to lowercase.
**			This function returns lowercase equivalent to c, if such value
**			exists, else c remains unchanged. The value is returned as an int
**			value that can be implicitly casted to char.
*/

int			ft_tolower(int c)
{
	return (ft_isupper(c) ? c + 32 : c);
}
