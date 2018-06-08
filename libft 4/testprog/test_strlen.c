/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:45:15 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/24 08:54:22 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char string[2] = "123";

	int i;

	i = ft_strlen(string);
//	printf("%s\n%lu %lu",string, sizeof(char *), sizeof(string));
	printf("string:%s \nlen:%i", string, i);

	return 1;
}
