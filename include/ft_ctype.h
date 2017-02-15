/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 14:46:27 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/13 13:02:23 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

int					ft_isquote(int c);
int					ft_isclosedquote(char *s, int c);
int					ft_isinquote(char *s, int c, int quote);

int					ft_strisalpha(char *s);
int					ft_strisalnum(char *s);
int					ft_strisascii(char *s);
int					ft_strisdigit(char *s);
int					ft_strislower(char *s);
int					ft_strisprint(char *s);
int					ft_strisupper(char *s);

#endif
