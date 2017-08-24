/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 11:22:17 by caroua            #+#    #+#             */
/*   Updated: 2017/08/24 11:23:32 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	tmp = *begin_list;
	while (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		free(tmp);
		tmp = *begin_list;
	}
}
