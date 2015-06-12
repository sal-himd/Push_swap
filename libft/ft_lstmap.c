/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:12:56 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:19:17 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_lst;
	t_list	*l1;
	t_list	*l2;

	l1 = lst;
	begin_lst = NULL;
	if ((*f) == NULL)
		return (NULL);
	while (l1 != NULL)
	{
		l2 = ft_lstnew(NULL, 0);
		if (l2 == NULL)
			return (NULL);
		l2 = (*f)(l1);
		ft_lstadd_back(&begin_lst, l2);
		l1 = l1->next;
	}
	return (begin_lst);
}
