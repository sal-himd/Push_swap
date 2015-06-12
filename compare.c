/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 21:38:30 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/26 21:38:32 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	last_a(t_lst **a, t_lst **b, t_option option, int *n)
{
	t_lst *l1;
	t_lst *l2;

	if (*a != NULL)
	{
		l1 = lstat(*a, lstsize(*a) - 2);
		l2 = lstat(*a, lstsize(*a) - 1);
		if (l1->nbr > l2->nbr)
		{
			rra(a, b, option, n);
			if (test_sort(*a, *b))
				return ;
			rra(a, b, option, n);
			if (test_sort(*a, *b))
				return ;
			sa(a, b, option, n);
			if (test_sort(*a, *b))
				return ;
			ra(a, b, option, n);
			ra(a, b, option, n);
		}
	}
}

void	first_ab(t_lst **a, t_lst **b, t_option option, int *n)
{
	if (*a != NULL && *b != NULL)
	{
		if ((*a)->next != NULL && (*b)->next != NULL)
		{
			if ((*a)->nbr > ((*a)->next)->nbr && (*b)->nbr < ((*b)->next)->nbr)
				ss(a, b, option, n);
		}
	}
}

void	first_b(t_lst **a, t_lst **b, t_option option, int *n)
{
	if (*b != NULL)
	{
		if ((*b)->next != NULL)
		{
			if ((*b)->nbr < ((*b)->next)->nbr)
				sb(a, b, option, n);
		}
	}
}

int		last_first_a(t_lst **a, t_lst **b, t_option option, int *n)
{
	t_lst *a1;
	t_lst *a2;

	if (lstsize(*a) > 1)
	{
		a1 = lstat(*a, 0);
		a2 = lstat(*a, lstsize(*a) - 1);
		if (a1->nbr > a2->nbr)
		{
			rra(a, b, option, n);
			return (1);
		}
	}
	return (0);
}

int		last_first_b(t_lst **a, t_lst **b, t_option option, int *n)
{
	t_lst *b1;
	t_lst *b2;

	if (lstsize(*b) > 1)
	{
		b1 = lstat(*b, 0);
		b2 = lstat(*b, lstsize(*b) - 1);
		if (b1->nbr < b2->nbr)
		{
			rb(a, b, option, n);
			return (1);
		}
	}
	return (0);
}
