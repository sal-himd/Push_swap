/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 21:36:06 by sal-himd          #+#    #+#             */
/*   Updated: 2015/06/12 19:36:00 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		test_sort(t_lst *a, t_lst *b)
{
	t_lst *a_;

	if (b != NULL)
		return (0);
	a_ = a;
	while (a_->next != NULL)
	{
		if (a_->nbr >= (a_->next)->nbr)
			return (0);
		a_ = a_->next;
	}
	return (1);
}

int		test_sorttolast(t_lst *lst)
{
	t_lst		*l1;
	t_lst		*l2;
	int			i;

	i = 0;
	while (i < lstsize(lst) - 2)
	{
		l1 = lstat(lst, i);
		l2 = lstat(lst, i + 1);
		if (l1->nbr > l2->nbr)
			return (0);
		i++;
	}
	return (1);
}
