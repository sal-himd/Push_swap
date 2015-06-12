/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 03:04:37 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/22 03:04:39 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

void	test_av(int ac, char **av, int start)
{
	while (ac > start)
	{
		if (ft_strlen(av[ac - 1]) > 15)
			put_error();
		if (ft_strisdigit(av[ac - 1]) == 0)
			put_error();
		if (ft_atol(av[ac - 1]) > 2147483647)
			put_error();
		if (ft_atol(av[ac - 1]) < -2147483648)
			put_error();
		ac--;
	}
}

void	test_double(t_lst *lst)
{
	t_lst *l1;
	t_lst *l2;

	l1 = lst;
	while (l1->next != NULL)
	{
		l2 = l1->next;
		while (l2 != NULL)
		{
			if (l1->nbr == l2->nbr)
				put_error();
			l2 = l2->next;
		}
		l1 = l1->next;
	}
}
