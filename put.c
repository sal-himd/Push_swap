/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 18:31:54 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/27 18:31:56 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_debug(t_lst *a, t_lst *b, t_option option)
{
	ft_putstr("a:");
	if (a != NULL)
		ft_putchar(' ');
	put_lst(&a);
	ft_putchar('\n');
	ft_putstr("b:");
	if (b != NULL)
		ft_putchar(' ');
	put_lst(&b);
	if (!test_sort(a, b) || option.n == 1)
		ft_putchar('\n');
}

void	put_result(t_lst *a, t_lst *b, t_option option, int *n)
{
	if (option.v)
	{
		ft_putendl(":");
		put_debug(a, b, option);
		if (option.n == 1)
			put_n(*n);
	}
	else if (test_sort(a, b) == 0)
		ft_putchar(' ');
}

void	put_n(int n)
{
	ft_putstr("n: ");
	ft_putnbr(n);
	ft_putchar('\n');
}
