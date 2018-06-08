/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:17:47 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/31 14:33:29 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
int uf_free_tab(void **a)
{
	(char)a;
	return (0);
}
	
int	main(void)
{
	char			**ret;
	printf("0.0"); 
	ft_strsplit(NULL, 0);
	ft_strsplit(NULL, 'a');
	printf("-1");
	ret = ft_strsplit("", '*');
	printf("0"); /*
	if (ret == NULL || ret[0] != NULL)
	{
		printf("Error Line %d, Funct %s : \
			   \nYour function has return NULL or the first pointer in your tab is NULL\n", __LINE__ - 2, __func__);
		uf_free_tab((void **)ret);
		return (0);
	}
	uf_free_tab((void **)ret);
	ret = ft_strsplit("*********", '*');
	if (ret == NULL || ret[0] != NULL)
	{
		printf("Error Line %d, Funct %s : \
			   \nYour function has return NULL or the first pointer in your tab is NULL\n", __LINE__ - 2, __func__);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \nUnable to free your tab in first test\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("hello", '*');
	printf("1");
	if (ret[1] != NULL && strcmp(ret[0], "hello") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"hello\", '*').\nExpected tab[0] = \"hello\" and tab[1] = NULL \
			   but have tab[0] = \"%s\" and tab[1] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in second test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("*hello", '*');
	printf("2");
	if (ret[1] != NULL && strcmp(ret[0], "hello") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"*hello\", '*').\nExpected tab[0] = \"hello\" and tab[1] = NULL \
			   but have tab[0] = \"%s\" and tab[1] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in third test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("*hello*", '*');
	printf("3");
	if (ret[1] != NULL && strcmp(ret[0], "hello") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"*hello*\", '*').\nExpected tab[0] = \"hello\" and tab[1] = NULL \
			   but have tab[0] = \"%s\" and tab[1] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in third test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("*hel*lo*", '*');
	printf("4");
	if (ret[2] != NULL && strcmp(ret[0], "hel") != 0 && strcmp(ret[1], "lo") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"*hel*lo*\", '*').\nExpected tab[0] = \"hel\", tab[1] = \"lo\" and tab[2] = NULL \
			   but have tab[0] = \"%s\", tab[1] = \"%s\" and tab[2] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1], ret[2]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in fourth test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("*hel*lo*f", '*');
	printf("5");
	if (ret[3] != NULL && strcmp(ret[0], "hel") != 0 && strcmp(ret[1], "lo") != 0 &&
		strcmp(ret[2], "f") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"*hel*lo*f\", '*').\nExpected tab[0] = \"hel\", tab[1] = \"lo\", tab[2] = \"f\" and tab[3] = NULL \
			   but have tab[0] = \"%s\", tab[1] = \"%s\", tab[2] = \"%s\" and tab[3] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1], ret[2], ret[3]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in fifth test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("g*hel*lo*f", '*');
	printf("6");
	if (ret[4] != NULL && strcmp(ret[0], "g") != 0 && strcmp(ret[1], "hel") != 0 &&
		strcmp(ret[2], "lo") != 0 && strcmp(ret[3], "f") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"g*hel*lo*f\", '*').\nExpected tab[0] = \"g\", tab[1] = \"hel\", tab[2] = \"lo\", tab[3] = \"f\" and tab[4] = NULL \
			   but have tab[0] = \"%s\", tab[1] = \"%s\", tab[2] = \"%s\", tab[3] = \"%s\" and tab[4] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1], ret[2], ret[3], ret[4]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in sixth test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	}
	ret = ft_strsplit("***hel****lo**", '*');
	printf("7");
	if (ret[2] != NULL && strcmp(ret[0], "hel") != 0 && strcmp(ret[1], "lo") != 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strsplit(\"*hel****lo*\", '*').\nExpected tab[0] = \"hel\", tab[1] = \"lo\" and tab[2] = NULL \
			   but have tab[0] = \"%s\", tab[1] = \"%s\" and tab[2] = \"%s\"\033[0m\n", __LINE__ - 2, __func__, ret[0], ret[1], ret[2]);
		uf_free_tab((void **)ret);
		return (0);
	}
	if (uf_free_tab((void **)ret) == 0)
	{
		printf("Error Line %d, Funct %s : \n\033[31mUnable to free your tab in seventh test\033[0m\n", __LINE__ - 2, __func__);
		return (0);
	} */
	return (1);
}
