/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:22:11 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/08 17:54:59 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	if (s == NULL)
		return (NULL);
	s2 = (char*)s;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&s2[i]);
	return (NULL);
}
