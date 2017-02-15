/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:26:39 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 11:35:01 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
**			This function checks if the passed character is alphanumeric.
**			This function returns non-zero value if c is an alphabet, else it
**			returns 0.
*/

int			ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
