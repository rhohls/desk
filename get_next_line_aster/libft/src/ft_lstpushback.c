/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:24:47 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/08 17:23:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushback(t_list **lst, const void *content, size_t size)
{
	t_list	*new_lst;

	new_lst = ft_lstnew(content, size);
	if (new_lst == NULL)
		return (NULL);
	if (*lst == NULL)
		*lst = new_lst;
	else
		ft_lstaddend(lst, new_lst);
	return (new_lst);
}
