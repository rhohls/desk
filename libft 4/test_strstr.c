/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:18:31 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/25 12:03:19 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char st1[] = "see F your F return FF now FF";
	char st2[] = "FF";


	
    //printf("st2= %p\n", st2);
	printf("st1 loc= %p\n", (st1 + 20));
	printf("ftstrcmp = %i\n", ft_strcmp((st1 + 20),st2));
	printf("strcmp = %i\n", strcmp((st1+20),st2));
	printf("strcmp = %i\n", ft_strcmp_simple((st1+20),st2));
	printf("strstr = %p\n", strstr(st1,st2));
	printf("ft_str = %p\n", ft_strstr(st1,st2));

	return (0);
}

