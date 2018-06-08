/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:50:09 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 08:24:06 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_strcmp(const char *str1, const char *str2);
void    ft_striter(char *str, void (*f)(char *));
int		ft_atoi(const char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strcpy(char *dst, const char *src);
void	*ft_memccpy(void *dst, const void *src, int charc, size_t n);
void	*ft_memcpy(void *dst, const void *sourc, size_t n);
void    *ft_memchr(const void *s, int i, size_t n);

#endif
