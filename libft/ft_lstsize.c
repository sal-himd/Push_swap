/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:19:22 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/03 20:45:52 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *alst)
{
	int		size;
	t_list	*l;

	l = alst;
	size = 0;
	while (l != NULL)
	{
		l = l->next;
		size++;
	}
	return (size);
}
