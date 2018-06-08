/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:18:31 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 08:30:35 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char st1[] = "";
	char st2[] = "";


	

	printf("strcmp = %i\n", strcmp(st1,st2));
	printf("ft_cmp = %i\n", ft_strcmp(st1,st2));

	return (0);
}

