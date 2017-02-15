/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:51:57 by cjacquem          #+#    #+#             */
/*   Updated: 2016/06/15 10:39:51 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**			This function compares the string pointed to, by s1 to the string
**			pointed to by s2.
**			This function return values that are as follows:
**				if Return value < 0 then it indicates s1 is less than s2.
**				if Return value > 0 then it indicates s2 is less than s1.
**				if Return value = 0 then it indicates s1 is equal to s2.
*/

int			ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *p_s1;
	unsigned char *p_s2;

	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	while (*p_s1 == *p_s2)
		if (!(*p_s1++ + *p_s2++))
			return (0);
	return (*p_s1 - *p_s2);
}
