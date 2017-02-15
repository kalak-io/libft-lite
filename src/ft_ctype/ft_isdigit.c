/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:15:09 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 11:41:39 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function checks if the passed character is a decimal digit
**			character.
**			This function returns non-zero value if c is a digit, else it
**			returns 0.
*/

int			ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
