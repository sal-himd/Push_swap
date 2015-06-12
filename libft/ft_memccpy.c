/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:37:33 by sal-himd          #+#    #+#             */
/*   Updated: 2014/11/04 18:39:43 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char*)dst;
	src_cpy = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		if (src_cpy[i] == (unsigned char)c)
		{
			dst = &dest_cpy[i + 1];
			return (dst);
		}
		i++;
	}
	return (NULL);
}
