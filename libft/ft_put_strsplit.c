/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:39:53 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:26:37 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_put_strsplit(char **str_array)
{
	int i;

	i = 0;
	if (str_array == NULL)
		return ;
	while (str_array[i] != NULL)
	{
		ft_putendl(str_array[i]);
		i++;
	}
}
