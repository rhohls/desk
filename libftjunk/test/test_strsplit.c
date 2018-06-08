/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:27:48 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 08:12:26 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main()
{
//	char *string = "      split       this for   me  !       ";
	char *string = "                  olol  ";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char **result = ft_strsplit(string, ' ');

	int i = 0;
	while (i < 8)
	{
		printf("str at [%i] is |%s| \n", i, result[i]);
		i++;
	}

}
