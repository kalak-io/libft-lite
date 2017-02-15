/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:50:57 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 11:34:41 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
**			This function checks if the passed character is alphabetic.
**			This function returns non-zero value if c is an alphabet, else it
**			returns 0.
*/

int			ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
