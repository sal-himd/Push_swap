/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 18:46:32 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/26 18:46:35 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		p(t_lst **l1, t_lst **l2)
{
	t_lst *b;

	if (l2 == NULL)
		return ;
	if (*l2 == NULL)
		return ;
	b = (*l2);
	(*l2) = (*l2)->next;
	b->next = (*l1);
	(*l1) = b;
}

void			pa(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	p(a, b);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("pa");
	put_result(*a, *b, option, n);
}

void			pb(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	p(b, a);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("pb");
	put_result(*a, *b, option, n);
}
