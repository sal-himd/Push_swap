/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:47:51 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/03 21:07:00 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char	c;
	int		i;
	int		l;

	l = ft_strlen(str);
	i = 0;
	while (i < l / 2)
	{
		c = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = c;
		i++;
	}
	return (str);
}
