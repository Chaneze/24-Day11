/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 11:31:11 by caroua            #+#    #+#             */
/*   Updated: 2017/08/24 14:50:03 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_reverse(t_list *begin_list)
{
	t_list	*first;
	t_list	*tmp1;
	t_list	*tmp2;

	if (!begin_list || !(begin_list->next))
		return (begin_list);	
	first = begin_list;
	tmp1 = first->next;
	tmp2 = tmp1->next
	find = begin_list;
	while (i < nbr)
	{
		if (!find)
			return (NULL);
		find = find->next;
		i++;
	}
	return (find);
}
