/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:21:43 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/22 14:22:57 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *str)
{
	while (*str)
	{
		*str = '\0';
		str++;
	}
}
