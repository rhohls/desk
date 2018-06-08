/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:50:09 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/28 17:06:18 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

char	*ft_strtrim(char const *str);
char    *ft_strncat(char *str1, const char *str2, size_t n);
char    *ft_strnew(size_t size);
int		ft_strncmp_simple(const char *s1, const char *s2, size_t len);
char    *ft_strnstr(const char *stringbig, const char *stringsmall, size_t len);
int		ft_strcmp_simple(const char *s1, const char *s2);
char	*ft_strstr(const char *stringbig, const char *stringsmall);
void    ft_strclr(char *str);
void	*ft_memalloc(size_t size);
int		ft_memcmp(const  void *s1, const void *s2, size_t n);
char	*ft_strcat(char *str1, const char *str2);
void    ft_striteri(char *str, void (*f)(unsigned int, char *));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *str, int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
void    *ft_memset(void *str, int c, size_t len);
int		ft_strcmp(const char *str1, const char *str2);
void    ft_striter(char *str, void (*f)(char *));
int		ft_atoi(const char *str);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strcpy(char *dst, const char *src);
void	*ft_memccpy(void *dst, const void *src, int charc, size_t n);
void	*ft_memcpy(void *dst, const void *sourc, size_t n);
void    *ft_memchr(const void *s, int i, size_t n);
int		ft_whitespace(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *str, int fd);
char    *ft_itoa(int num);
char    *ft_strnew(size_t size);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char	**ft_strsplit(char const *str, char c);
void    *ft_memalloc(size_t size);
size_t  ft_strlcat(char *str1, const char *str2, size_t len);
int		ft_power(int base, int power);
int     ft_int_len_neg(int num, int *neg);
int     ft_int_len(int num);
char    *ft_strmap(char const *str, char (*f)(char));
char **ft_strsplit(char const *str, char c);
char *ft_strsub(char const *str, unsigned int start, size_t len);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
#endif
