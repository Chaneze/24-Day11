/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 09:33:14 by caroua            #+#    #+#             */
/*   Updated: 2017/08/23 11:11:41 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *back;

	back = *begin_list;
	if (back)
	{
		while (back->next)
			back = back->next;
		back->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
