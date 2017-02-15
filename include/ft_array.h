/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 14:38:51 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 14:54:20 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <stddef.h>

void		ft_arrdel(char **arr, size_t size);
size_t		ft_arrlen(char **arr);

#endif
