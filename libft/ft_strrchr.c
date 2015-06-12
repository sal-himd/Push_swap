/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:30:50 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/08 22:41:36 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*s2;

	s2 = (char*)s;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return (&s2[i]);
	while (i > 0)
	{
		i--;
		if (s2[i] == (char)c)
			return (&s2[i]);
	}
	return (NULL);
}
