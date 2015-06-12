/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:55:27 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/06 20:43:23 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	char	*str1;
	char	*str2;
	int		l;

	i = 0;
	str1 = (char*)s1;
	str2 = (char*)s2;
	if (s2[0] == '\0')
		return (str1);
	l = ft_strlen(s2);
	while (str1[i] && i <= (int)n - l)
	{
		if (ft_strncmp(&str1[i], str2, l) == 0)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}
