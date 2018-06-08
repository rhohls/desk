/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:26:50 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/17 14:25:50 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
//void ft_putchar(char c);
int	main()
{
	char string[20] = "test string";
	char st1[20] = "poigneroigneroig";
	char *new;
	char *new2;
	char ch = 'a';

	new = ft_strdup(string);
	ft_strcpy(st1, string);

	ft_putstr(new);
	ft_putchar(ch);
	write(1,"\n",1);
	ft_putstr(st1);
	write(1,"\n",1);
	ft_putstr(string);
	return(0);
}
