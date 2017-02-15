/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:36:35 by cjacquem          #+#    #+#             */
/*   Updated: 2016/09/26 18:34:50 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		return (!ft_strcmp(s1, s2) ? 1 : 0);
	return (-1);
}
