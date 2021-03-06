/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:38:26 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 17:35:44 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if ((*f) == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}
