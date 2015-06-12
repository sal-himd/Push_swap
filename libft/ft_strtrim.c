/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:35:57 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/06 22:40:44 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static char		*ft_strtrim2(char const *s, char *str, int l, int i)
{
	int j;

	j = 0;
	while (j < l - i + 1)
	{
		str[j] = s[j + i];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	l = (int)ft_strlen(s) - 1;
	if (l + 1 == i)
	{
		str = (char*)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	while (l > 0 && ((s[l] == ' ' || s[l] == '\t' || s[l] == '\n')))
		l--;
	str = (char*)malloc(sizeof(char) * (l - i + 1));
	if (str == NULL)
		return (NULL);
	str = ft_strtrim2(s, str, l, i);
	return (str);
}
