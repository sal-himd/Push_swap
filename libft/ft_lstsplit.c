/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:18:31 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/05 19:56:18 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_list			*ft_lstsplit(char *s, char c)
{
	t_list		*alst;
	t_list		*lst;
	char		**split;
	int			i;

	split = ft_strsplit(s, c);
	if (split == NULL)
		return (NULL);
	alst = NULL;
	i = 0;
	while (split[i] != NULL)
	{
		lst = ft_lstnew(split[i], ft_strlen(split[i]) + 1);
		if (lst == NULL)
			return (NULL);
		ft_lstadd_back(&alst, lst);
		i++;
	}
	ft_free_strsplit(split);
	return (alst);
}
