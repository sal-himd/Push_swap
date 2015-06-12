/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 01:01:08 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/22 01:01:09 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static void		ft_ltoa_conv(long long n, int i, char *str)
{
	if (n >= 10)
	{
		ft_ltoa_conv(n / 10, i + 1, str);
		str[i] = n % 10 + '0';
	}
	else
	{
		str[i] = n % 10 + '0';
		str[i + 1] = '\0';
	}
}

char			*ft_ltoa(long long n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 24);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		ft_ltoa_conv(-n, 0, str);
	else
		ft_ltoa_conv(n, 0, str);
	ft_strrev(str);
	if (n < 0)
	{
		i = 24;
		while (i > 0)
		{
			str[i] = str[i - 1];
			i--;
		}
		str[0] = '-';
		str[24] = '\0';
	}
	return (str);
}
