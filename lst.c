/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 01:54:30 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/22 01:54:32 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_lst(t_lst **a)
{
	t_lst *l;

	l = *a;
	while (l != NULL)
	{
		ft_putnbr(l->nbr);
		l = l->next;
		if (l != NULL)
			ft_putchar(' ');
	}
}

t_lst	*lstnew(int const nbr)
{
	t_lst *lst;

	lst = (t_lst *)malloc(sizeof(t_lst) * 1);
	lst->nbr = nbr;
	lst->next = NULL;
	return (lst);
}

void	lstadd(t_lst **alst, t_lst *new)
{
	if (alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}

int		lstsize(t_lst *alst)
{
	int		size;
	t_lst	*l;

	l = alst;
	size = 0;
	while (l != NULL)
	{
		l = l->next;
		size++;
	}
	return (size);
}

t_lst	*lstat(t_lst *alst, unsigned int nbr)
{
	t_lst			*l;
	unsigned int	i;

	i = 0;
	l = alst;
	while (l != NULL)
	{
		if (i == nbr)
			return (l);
		l = l->next;
		i++;
	}
	return (NULL);
}
