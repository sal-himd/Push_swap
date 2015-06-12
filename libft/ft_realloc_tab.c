/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:46:35 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/04 16:46:38 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char			**ft_realloc_tab(char **split)
{
	char		**tab;
	int			i;

	i = 0;
	if (split == NULL)
		tab = (char**)malloc(sizeof(char*) * (i + 2));
	while (split[i] != NULL)
		i++;
	tab = (char**)malloc(sizeof(char*) * (i + 2));
	i = 0;
	while (split[i] != NULL)
	{
		tab[i] = split[i];
		i++;
	}
	return (tab);
}
