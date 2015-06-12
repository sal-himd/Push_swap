/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 13:26:36 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/09 18:58:23 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisascii(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isascii(str[i]))
			return (0);
	}
	return (1);
}
