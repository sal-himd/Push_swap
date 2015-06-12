/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 16:21:16 by sal-himd          #+#    #+#             */
/*   Updated: 2015/02/11 16:21:17 by sal-himd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# include "libft.h"

typedef struct		s_lst
{
	int				nbr;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_option
{
	int				v;
	int				n;
	int				c;
	int				size;
}					t_option;

int					push_swap(int ac, char **av, t_option option, int start);
void				pre_sort(t_lst **a, t_lst **b, t_option option, int *n);
void				put_lst(t_lst **a);
t_lst				*lstnew(int const nbr);
void				lstadd(t_lst **alst, t_lst *new);
int					lstsize(t_lst *alst);
t_lst				*lstat(t_lst *alst, unsigned int nbr);
int					sort(t_lst **a, t_lst **b, t_option option, int *n);
void				rr(t_lst *lst);
void				put_error(void);
void				test_av(int ac, char **av, int start);
void				test_double(t_lst *lst);
void				put_debug(t_lst *a, t_lst *b, t_option option);
void				put_n(int n);
int					test_sort(t_lst *a, t_lst *b);
int					test_sorttolast(t_lst *lst);
void				last_a(t_lst **a, t_lst **b, t_option option, int *n);
int					last_first_a(t_lst **a, t_lst **b, t_option option, int *n);
void				first_ab(t_lst **a, t_lst **b, t_option option, int *n);
void				first_b(t_lst **a, t_lst **b, t_option option, int *n);
void				put_result(t_lst *a, t_lst *b, t_option option, int *n);
void				pa(t_lst **a, t_lst **b, t_option option, int *n);
void				pb(t_lst **a, t_lst **b, t_option option, int *n);
void				sa(t_lst **a, t_lst **b, t_option option, int *n);
void				sb(t_lst **a, t_lst **b, t_option option, int *n);
void				ss(t_lst **a, t_lst **b, t_option option, int *n);
void				ra(t_lst **a, t_lst **b, t_option option, int *n);
void				rra(t_lst **a, t_lst **b, t_option option, int *n);
void				rb(t_lst **a, t_lst **b, t_option option, int *n);
int					last_first_b(t_lst **a, t_lst **b, t_option option, int *n);

#endif
