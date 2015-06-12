/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:12:23 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:34:27 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *l;

	if ((*f) == NULL)
		return ;
	l = lst;
	while (l != NULL)
	{
		(*f)(l);
		l = l->next;
	}
}
