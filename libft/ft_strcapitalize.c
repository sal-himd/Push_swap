/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 12:34:45 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/09 15:17:03 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	str[0] = ft_toupper(str[0]);
	i = 0;
	while (str[i] != '\0')
	{
		if (i > 0)
		{
			if (ft_isalnum(str[i - 1]) == 0)
				str[i] = ft_toupper(str[i]);
			else
				str[i] = ft_tolower(str[i]);
		}
		i++;
	}
	return (str);
}
