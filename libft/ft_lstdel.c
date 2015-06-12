/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:10:35 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:10:50 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lst1;
	t_list	*lst2;

	if (alst == NULL || (*del) == NULL)
		return ;
	lst1 = *alst;
	while (lst1 != NULL)
	{
		lst2 = lst1;
		lst1 = lst1->next;
		ft_lstdelone(&lst2, (*del));
	}
	*alst = NULL;
}
