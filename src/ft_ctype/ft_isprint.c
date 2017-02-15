/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:35:20 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 11:44:59 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function checks whether the passed character is printable. A
**			printable character is a character that is not a control character.
**			This function returns a non-zero value(true) if c is a printable
**			character else, zero (false).
*/

int			ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
