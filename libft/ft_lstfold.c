/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:18:49 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/03 22:40:55 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_lstfold(void *in, t_list *al, void *(*f)(void*, void*))
{
	void	*result;
	t_list	*l;

	if ((*f) == NULL)
		return (NULL);
	if (ft_lstsize(al) == 0 && in == NULL)
		return (NULL);
	if (ft_lstsize(al) == 0 && in != NULL)
		return (in);
	l = al;
	if (in == NULL)
	{
		result = l->content;
		l = l->next;
	}
	else
		result = in;
	while (l != NULL)
	{
		result = (*f)(result, l->content);
		l = l->next;
	}
	return (result);
}
