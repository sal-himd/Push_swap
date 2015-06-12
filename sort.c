/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 02:02:48 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/22 02:02:50 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			pre_sort(t_lst **a, t_lst **b, t_option option, int *n)
{
	if (test_sorttolast(*a) == 0 && lstsize(*a) > 3)
	{
		while (last_first_a(a, b, option, n) == 1)
			;
	}
	else if (lstsize(*a) > 3)
		last_a(a, b, option, n);
	else
	{
		if ((*a)->next != NULL)
		{
			if ((*a)->nbr > ((*a)->next)->nbr)
				sa(a, b, option, n);
		}
	}
}

static void		sort_opti(t_lst **a, t_lst **b, t_option option, int *n)
{
	first_ab(a, b, option, n);
	if (option.size == 1)
	{
		while (last_first_a(a, b, option, n) == 1)
			;
		while (last_first_b(a, b, option, n) == 1)
			;
	}
	first_b(a, b, option, n);
	if ((*a)->next != NULL)
	{
		if ((*a)->nbr > ((*a)->next)->nbr)
			sa(a, b, option, n);
	}
}

static void		sort_main(t_lst **a, t_lst **b, t_option option, int *n)
{
	if (*a != NULL && (*a)->next != NULL)
	{
		if ((*a)->nbr > ((*a)->next)->nbr)
			sa(a, b, option, n);
		else
			pb(a, b, option, n);
	}
	else
	{
		while (*b != NULL)
		{
			sort_opti(a, b, option, n);
			pa(a, b, option, n);
		}
	}
}

int				sort(t_lst **a, t_lst **b, t_option option, int *n)
{
	if (test_sort(*a, *b))
		return (1);
	sort_opti(a, b, option, n);
	if (test_sort(*a, *b))
		return (1);
	sort_main(a, b, option, n);
	return (0);
}
