/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:46:48 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/24 13:35:00 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main()
{
	char *mine;
	char *theirs;

	char t1[] = "abcdefghijklmnopqrstuvwxyz";
	char t2[] = "abcdefghijklmnopqrstuvwxyz";
	char tst[] = "string with\200inside !";


	mine = ft_memccpy(t1,tst, '\200', 21);
	theirs = memccpy(t1,tst, '\200', 21);

	printf("string:%s\n",tst);
	printf("char: \200\n");
	printf("mine: %s\n",mine);
	printf("them: %s\n",theirs);

	return 1;
}
	
