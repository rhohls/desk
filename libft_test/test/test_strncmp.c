/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:20:31 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/31 11:53:49 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main()
{
	printf("my strncmp: |%i|",ft_strncmp("abc", "abcde", 3));
	printf("theirs strncmp: |%i|\n",strncmp("abc", "abcde", 3));

	printf("my strncmp: |%i|",ft_strncmp("q", "a", 0));
	printf("theirs strncmp: |%i|\n",strncmp("q", "a", 0));

	printf("my strncmp: |%i|",ft_strncmp("abcde", "abcce", 20));
	printf("theirs strncmp: |%i|\n",strncmp("abcde", "abcce", 20));

	printf("my strncmp: |%i|",ft_strncmp("abcce", "abcce", 20));
	printf("theirs strncmp: |%i|\n",strncmp("abcce", "abcce", 20));

	printf("my strncmp: |%i|",ft_strncmp("abcdeu", "abcce", 20));
	printf("theirs strncmp: |%i|\n",strncmp("abcdeu", "abcce", 20));

	printf("my strncmp: |%i|",ft_strncmp("ab\0cde", "abcc\0e", 20));
	printf("theirs strncmp: |%i|\n",strncmp("ab\0cde", "abcc\0e", 20));

	printf("my strncmp: |%i|",ft_strncmp("ab\0cde", "abcc\0e", 3));
	printf("theirs strncmp: |%i|\n",strncmp("ab\0cde", "abcc\0e", 3));

	printf("my strncmp: |%i|",ft_strncmp("abc", "abd", 2));
	printf("theirs strncmp: |%i|\n",strncmp("abc", "abd", 2));

}

	
