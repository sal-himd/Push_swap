/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:19:54 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:30:55 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstfind(t_list *alst, void *content_ref, int (*cmp)())
{
	t_list *l;

	if ((*cmp) == NULL)
		return (NULL);
	l = alst;
	while (l != NULL)
	{
		if ((*cmp)(l->content, content_ref) == 0)
			return (l);
		l = l->next;
	}
	return (NULL);
}
