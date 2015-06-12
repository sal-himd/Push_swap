/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:33:00 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/05 19:47:08 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static void		ft_itoa_conv(int n, int i, char *str)
{
	if (n >= 10)
	{
		ft_itoa_conv(n / 10, i + 1, str);
		str[i] = n % 10 + '0';
	}
	else
	{
		str[i] = n % 10 + '0';
		str[i + 1] = '\0';
	}
}

static char		*ft_itoa2(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		ft_itoa_conv(-n, 0, str);
	else
		ft_itoa_conv(n, 0, str);
	ft_strrev(str);
	if (n < 0)
	{
		i = 11;
		while (i > 0)
		{
			str[i] = str[i - 1];
			i--;
		}
		str[0] = '-';
		str[11] = '\0';
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char *str;

	if (n == 2147483647)
		str = ft_strdup("2147483647");
	else if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
		str = ft_itoa2(n);
	return (str);
}
