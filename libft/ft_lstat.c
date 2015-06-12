/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:19:40 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/03 18:31:56 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstat(t_list *alst, unsigned int nbr)
{
	t_list			*l;
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
