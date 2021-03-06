/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 12:21:45 by rhohls            #+#    #+#             */
/*   Updated: 2018/06/08 15:01:00 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

#include <stdio.h>

/*
** str iso: returns new string from str[0] until char c
** then removes that from original using memmove
*/

static char	*ft_striso(char *str, char c)
{
	size_t	i;
	size_t	len;
	size_t	leni;
	char	*ret;		

	len = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	ret = ft_strsub(str, 0, i);
	if (c == '\0')
	{
		i--;
//		leni = len;
	}		
	leni = len - i;
	
	size_t 	bz;
	bz = i;

//	printf("\n*-- iso --*\n");
//	printf("i is: %zu | len is: %zu | leni is: %zu\n",i,len, leni);
//	printf("return str is: %s and address %p \n", ret, ret);
//	printf("return str is: %s \n", ret);
//	printf("curr string |%s| and post move |%s| and address %p \n", str, (str + i + 1), str);
//	printf("curr string |%s| and post move |%s|\n", str, (str + i + 1));
	ft_memmove(str, (str + (i + 1)), leni);
//	printf("return str is: %s and address %p \n", ret, ret);
	ft_bzero((str + leni), bz);
//	printf("after move |%s \n", str);
//	printf("return str is: %s and address %p \n", ret, ret);
//	printf("i is: %zu | len is: %zu \n",i,len);
	return (ret);
}

static t_gnl  *ft_lstnew_gnl(int fd)
{
	t_gnl *new;

	if (!(new = (t_gnl*)ft_memalloc(sizeof(t_gnl))))
		return (NULL);
	new->string = ft_strnew(1);
	new->fd = fd;
	return (new);
}

static char *ft_strjoin_gnl(char *s1, char *s2)
{
	char *str_new;

	if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	if (!(str_new = ft_strnew(ft_strlen(s1)
					+ ft_strlen(s2) + 1)))
		return (NULL);
	ft_strcpy(str_new, s1);
	ft_strcpy((str_new + ft_strlen(s1)), s2);
	free(&(*s1));
	return (str_new);
}

int get_next_line(const int fd, char **line)
{
	if (BUFF_SIZE <= 0)
		return (-1);

	static t_gnl	*listhold;
	t_gnl           *lstcur;
 	t_gnl           *start;
	
	lstcur = NULL;
	start = listhold;

	while (listhold)
	{
		if (listhold->fd == fd)
		{
			lstcur = listhold;
			break ;
		}
		if (listhold->next)
			listhold = listhold->next;
		else
			break ;
	}
	if (!lstcur)
	{
		lstcur = ft_lstnew_gnl(fd);
		if (!listhold)
			listhold = lstcur;
		else
			listhold->next = lstcur;
	}
	else
		listhold = start;



	//----------------//
	
	char	*strhold;
	char	buffstr[BUFF_SIZE + 1];
	int		read_ret;

	strhold = lstcur->string;
	if (strhold)
	{
		if (ft_strchr(strhold, '\n'))
		{
			*line = ft_striso(strhold, '\n');
			lstcur->string = strhold;
			return 1;
		}
	}

	while (TRUE)
	{
		ft_bzero(buffstr, (size_t) BUFF_SIZE);
		if ((read_ret = read(fd, buffstr, BUFF_SIZE)) == -1)
			return (-1);

//		printf("read ret: %i & str read is : ||%s|| \n",read_ret, buffstr);
		strhold = ft_strjoin_gnl(strhold, buffstr);
//		printf("str in hold1:%s \n", strhold);
		
		if (read_ret == 0 && ft_strlen(strhold) == 0)
		{
//			printf("0\n");
			if (strhold)
				free(strhold);
//			printf("1\n");
			free(lstcur);
			return 0;
		}
//		printf("between\n");
		if (read_ret == 0)
		{
//			printf("str in hold88:%s \n", strhold);
			*line = ft_striso(strhold, '\0');
//			printf("line ret 00 |%s| \n",*line);
			lstcur->string = strhold;
			return 1;
		}

		else if (ft_strchr(strhold, '\n'))
		{
//			printf("11\n");
			*line = ft_striso(strhold, '\n');
//			printf("ret string :%s address: %p \n", *line, *line);
//			printf("str in hold2:%s \n", strhold);
			lstcur->string = strhold;
//			printf("22\n");
			return 1;
		}
	}
}











