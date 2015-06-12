/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 19:23:26 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/26 19:23:28 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		r(t_lst *lst)
{
	t_lst	*l;
	int		b;

	l = lst;
	b = l->nbr;
	while (l->next != NULL)
	{
		l->nbr = (l->next)->nbr;
		l = l->next;
	}
	l->nbr = b;
}

void			rr(t_lst *lst)
{
	t_lst	*l1;
	t_lst	*l2;
	int		i;
	int		b;

	if (lst == NULL)
		return ;
	i = lstsize(lst) - 1;
	if (i < 1)
		return ;
	l1 = lstat(lst, i);
	b = l1->nbr;
	while (i > 0)
	{
		l1 = lstat(lst, i);
		l2 = lstat(lst, i - 1);
		l1->nbr = l2->nbr;
		i--;
	}
	l1 = lstat(lst, 0);
	l1->nbr = b;
}

void			ra(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	r(*a);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("ra");
	put_result(*a, *b, option, n);
}

void			rra(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	rr(*a);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("rra");
	put_result(*a, *b, option, n);
}

void			rb(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	r(*b);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("rb");
	put_result(*a, *b, option, n);
}
