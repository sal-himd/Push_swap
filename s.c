/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 18:58:05 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/26 18:58:07 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		s(t_lst *lst)
{
	int b;

	if (lst == NULL)
		return ;
	if (lst->next == NULL)
		return ;
	b = lst->nbr;
	lst->nbr = (lst->next)->nbr;
	(lst->next)->nbr = b;
}

void			sa(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	s(*a);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("sa");
	put_result(*a, *b, option, n);
}

void			sb(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	s(*b);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("sb");
	put_result(*a, *b, option, n);
}

void			ss(t_lst **a, t_lst **b, t_option option, int *n)
{
	(*n)++;
	s(*a);
	s(*b);
	if (option.c == 1)
	{
		if (test_sort(*a, *b))
			write(1, "\033[93m", 6);
	}
	ft_putstr("ss");
	put_result(*a, *b, option, n);
}
