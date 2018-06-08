/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:23:13 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/28 08:44:30 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_node;

	//check memalloc vs normal
	if (!(new_node = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!(*(char*)content))
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		//check memalloc content size
		if (!(new_node->content = (void*)ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;		
	}
	new_node->next = NULL;
	return (new_node);	
}
