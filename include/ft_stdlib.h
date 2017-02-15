/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 14:59:23 by cjacquem          #+#    #+#             */
/*   Updated: 2016/10/26 15:04:00 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdio.h>

int					ft_atoi(const char *s);
char				*ft_ctoa(char c);
char				*ft_getenv(const char *name);
char				*ft_itoa(int n);
char				*ft_itoa_base(int value, int base);
char				*ft_lltoa_base(long long value, int base);
char				*ft_ltoa(long n);
char				*ft_ltoa_base(long value, int base);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

#endif
