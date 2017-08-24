/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:33:37 by caroua            #+#    #+#             */
/*   Updated: 2017/08/24 11:12:20 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = NULL;
	new = (t_list*)malloc(sizeof(t_list));
	if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*tmp;
	int		i;

	i = 2;
	if (ac == 1)
		return (NULL);
	begin = ft_create_elem(av[1]);
	while (i < ac)
	{
		tmp = begin;
		begin = ft_create_elem(av[i]);
		begin->next = tmp;
		i++;
	}
	return (begin);
}

int		main(int argc, char **argv)
{
	t_list	*test;

	test = ft_list_push_params(argc, argv);
	printf("%s\n", test->data);
	printf("%s\n", test->next->data);
	printf("%s\n", test->next->next->data);
	return (0);
}
