/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:04:31 by cjacquem          #+#    #+#             */
/*   Updated: 2017/02/15 13:29:11 by cjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_memequ(const void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			ft_memswp(void *a, void *b, size_t len);
char			*ft_str2join(char const *s1, char const *s2, char const *s3);
char			*ft_strcapitalize(char *s);
int				ft_strcasecmp(const char *s1, const char *s2);
char			*ft_strcat(char *s1, const char *s2);
int				ft_strcchr(const char *s, char c);
int				ft_strcchr_d(const char *s, char *delim);
char			*ft_strchr(const char *s, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
size_t			ft_strcspn(const char *s1, const char *s2);
int				ft_strdec(char *s1, char *s2);
void			ft_strdel(char **as);
char			*ft_strdiff(char *s1, char *s2);
char			*ft_strdup(const char *s1);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strinc(char *s1, char *s2);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strnjoin(char const *s1, char const *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strlowcase(char *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strmerge(char *origin, char *adding);
char			*ft_strnmerge(char *origin, char *adding, size_t n);
int				ft_strncasecmp(const char *s1, const char *s2, size_t n);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strndup(const char *s1, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strpbrk(const char *s1, const char *s2);
char			*ft_strrcapitalize(char *s);
char			*ft_strrchr(const char *s, int c);
char			*ft_strrealloc(char *s, size_t size);
char			*ft_strreplace(char *old, char *replace);
char			*ft_strrev(char *s);
char			*ft_strrtitle(char *s);
char			**ft_strsplit(char const *s, char c);
char			**ft_strsplit_d(char *s, char *delim);
char			**ft_strsplit_q(char *s, char c, char quote);
size_t			ft_strspn(char const *s1, char const *s2);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtitle(char *s);
char			*ft_strtok(char *s, const char *delim);
char			*ft_strtrim(char const *s);
char			*ft_struppercase(char *s);
int				ft_strpos(char *s, char c);

#endif
