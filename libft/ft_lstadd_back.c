/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:17:12 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:39:10 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (alst == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
	}
	else
	{
		lst = *alst;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
}
