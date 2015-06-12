/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 20:46:16 by sal-himd          #+#    #+#             */
/*   Updated: 2014/12/05 23:15:40 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

static void	ft_rem(char **line, char **buffer)
{
	char	*s;

	s = *line;
	*line = ft_strsub(*line, 0, *buffer - *line);
	*buffer = *buffer + 1;
	*buffer = ft_strdup(*buffer);
	free(s);
}

static char	*ft_union(char **line, char *buffer, int n)
{
	char	*s;

	s = *line;
	buffer[n] = '\0';
	*line = ft_strjoin(*line, buffer);
	free(s);
	return (*line);
}

int			get_next_line(int const fd, char **line)
{
	static char	*str;
	char		*buffer;
	int			n;

	buffer = (char*)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (fd >= 0 && buffer != NULL && line != NULL)
	{
		*line = ft_strnew(1);
		if (str != NULL)
		{
			*line = ft_strdup(str);
			free(str);
		}
		while ((str = ft_strchr(*line, '\n')) == NULL
			&& (n = read(fd, buffer, BUFF_SIZE)) > 0)
			*line = ft_union(line, buffer, n);
		if (n == 0 && str == NULL)
			return (0);
		if (n == -1)
			return (-1);
		ft_rem(line, &str);
		free(buffer);
		return (1);
	}
	return (-1);
}
