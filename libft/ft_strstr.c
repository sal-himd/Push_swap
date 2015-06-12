/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:39:08 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/06 20:42:04 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char*)s1;
	str2 = (char*)s2;
	if (s2[0] == '\0')
		return (str1);
	while (str1[i])
	{
		if (ft_strncmp(&str1[i], str2, ft_strlen(str2)) == 0)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}
