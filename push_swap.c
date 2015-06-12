/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 07:44:03 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/28 07:44:05 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void pre_swap(t_lst **a, t_lst **b, t_option *option)
{
	test_double(*a);
	if (lstsize(*a) < 50)
		option->size = 1;
	else
		option->size = 0;
	if (option->v)
	{
		put_debug(*a, *b, *option);
		if (option->n == 1)
			put_n(0);
	}
}

int			push_swap(int ac, char **av, t_option option, int start)
{
	t_lst	*a;
	t_lst	*a_;
	t_lst	*b;
	int		n;

	a = NULL;
	b = NULL;
	n = 0;
	while (ac > start)
	{
		a_ = lstnew(ft_atoi(av[ac - 1]));
		lstadd(&a, a_);
		ac--;
	}
	pre_swap(&a, &b, &option);
	if (test_sort(a, b) == 1)
		return (n);
	pre_sort(&a, &b, option, &n);
	if (test_sort(a, b) == 1)
		return (n);
	while (sort(&a, &b, option, &n) == 0)
		;
	return (n);
}
