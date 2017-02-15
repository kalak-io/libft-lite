/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 13:21:30 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:27:38 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTS_H
# define FT_PUTS_H

# include <stddef.h>
# include "ft_list.h"

void				ft_putchar(char c);
void				ft_putchar_color(char c, char *color);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_color(char *s, char *color);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnendl(char const *s, size_t len);
void				ft_putnbr(int n);
void				ft_putnbr_endl(int n);
void				ft_putnbr_color(int n, char *color);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_color(char *s, char *color);
void				ft_putstr_epur(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnstr(char const *s, size_t len);
void				ft_putnstr_color(char const *s, size_t len, char *color);
void				ft_putstr_pad(char *s, char c, size_t width);
void				ft_putstr_pad_col(char *s, char c, size_t width, char *col);
void				ft_puttable(int *table, size_t n);
void				ft_putarr(char **arr);
void				ft_putelem(t_list *elem);
void				ft_putelem_endl(t_list *elem);
void				ft_putelem_color(t_list *elem, char *color);
void				ft_putcontent(t_list *elem);
void				ft_putcontent_color(t_list *elem, char *color);
void				ft_putlst(t_list *lst);
void				ft_putlst_color(t_list *lst, char *color);

#endif
