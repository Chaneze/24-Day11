/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:22:54 by caroua            #+#    #+#             */
/*   Updated: 2017/08/23 11:23:00 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *front;

	if (*begin_list)
	{
		front = ft_create_elem(data);
		front->next = *begin_list;
		*begin_list = front;
	}
	else
		*begin_list = ft_create_elem(data);
}
