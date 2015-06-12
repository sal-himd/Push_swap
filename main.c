/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 16:05:33 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/11 16:05:35 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_option	set_option(int ac, char **av, int *start)
{
	t_option	option;
	int			i;

	option.v = 0;
	option.n = 0;
	option.c = 0;
	i = 1;
	while (i < ac && av[i][0] == '-')
	{
		if (ft_strchr(av[i], 'n') == NULL && ft_strchr(av[i], 'v') == NULL
			&& ft_strchr(av[i], 'c') == NULL)
			return (option);
		if (ft_strchr(av[i], 'n') != NULL)
			option.n = 1;
		if (ft_strchr(av[i], 'v') != NULL)
			option.v = 1;
		if (ft_strchr(av[i], 'c') != NULL)
			option.c = 1;
		(*start)++;
		i++;
	}
	return (option);
}

int				main(int ac, char **av)
{
	int			start;
	int			n;
	t_option	option;

	start = 1;
	n = 0;
	option = set_option(ac, av, &start);
	if (start >= ac)
		return (1);
	if (ac > 1)
	{
		test_av(ac, av, start);
		n = push_swap(ac, av, option, start);
	}
	if (n > 0 && !(option.n == 1 && option.v == 1))
		ft_putchar('\n');
	if (option.n == 1 && option.v == 0)
		put_n(n);
	return (0);
}
