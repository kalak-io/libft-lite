/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 14:48:41 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/13 13:05:21 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

/*
**							STRUCT_LIST
*/
typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

/*
**				LIST
*/
void			ft_lstadd(t_list **alst, t_list *new_elem);
void			ft_lstaddend(t_list **alst, t_list *new_elem);
void			ft_lstinsert(t_list **alst, t_list *new_elem, unsigned int n);
void			ft_lstinsert_before(t_list **alst, t_list *p, t_list *new_elem);
void			ft_lstinsert_sorted(t_list **alst, t_list *new_elem,\
																int (*cmp)());
t_list			*ft_lstat(t_list *lst, size_t n);
void			*ft_lstat_data(t_list *lst, size_t n);
void			ft_lstclr(t_list **alst);
t_list			*ft_lstchr(t_list *lst, void const *content);
t_list			*ft_lstnchr(t_list *lst, void const *content, size_t n);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelif(t_list **alst, void *data_ref, int (*cmp)());
void			ft_lstdelnif(t_list **alst, void *data_ref, size_t n,\
																int (*cmp)());
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstdup(t_list *elem);
char			**ft_lstduparr(t_list *lst);
t_list			*ft_lstfind(t_list *lst, void *data, int (*cmp)());
t_list			*ft_lstnfind(t_list *lst, void *data, size_t n, int (*cmp)());
void			*ft_lstfold(t_list *lst, void *(*f)(t_list *, const void*));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstfirst(t_list *lst);
size_t			ft_lstlen(t_list *lst);
int				ft_lstindex(t_list *lst, void *data, int (*cmp)());
int				ft_lstnindex(t_list *lst, void *data, size_t n, int (*cmp)());
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstiterif(t_list *lst, void (*f)(t_list *elem),\
												void *data_ref, int (*cmp)());
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstcat(t_list *lst1, t_list *lst2);
void			ft_lstmergesort(t_list **alst, t_list *lst, int (*cmp)());
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_lstparam(int ac, char **av);
size_t			ft_lstpos(t_list *lst, t_list *elem);
void			ft_lstrev(t_list **alst);
void			ft_lstsort(t_list **alst, int (*cmp)());
t_list			*ft_strsplitlst(char const *s, char c);
t_list			*ft_strsplitlst_d(char *s, const char *delim);
char			**ft_lsttoarr(t_list *lst);
char			*ft_lsttostr(t_list *lst, char *delim);
void			ft_lstchange(t_list **alst, void *content, void *new_content);
void			ft_lstallchange(t_list **alst, void *content,\
															void *new_content);
void			ft_lstreplace(t_list **alst, t_list *p, t_list *elem);

void			ft_del(void *data, size_t len);

#endif
