/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:50:17 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 09:32:43 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct s_list
{
	int				value;
	unsigned int	index;
	struct s_list	*next;
}	t_list;

int		is_sign(char c);
int		is_digit(char c);
int		is_space(char c);
int		is_valid(char c);
int		check_arg(char *av);
void	error(char *error);
void	error_d(char *error, void *d);
void	error_lst(char *error, t_list *lst);
void	error_dlst(char *error, t_list *lst, void *d);
int		ft_atoi(char *av);
char	*skip_space(char *av);
int		*split(char *av, int *size);
int		is_unique(t_list *lst, int val);
void	sort_indexes(t_list *head);
t_list	*lst_new(int value);
t_list	*lst_add(t_list *lst, int value);
int		lst_size(t_list *stack);
void	lst_delete(t_list *lst);
void	pa(t_list **st_a, t_list **st_b);
void	pb(t_list **st_a, t_list **st_b);
void	ra(t_list **st_a);
void	rb(t_list **st_a);
void	rr(t_list **st_a, t_list **st_b);
void	rra(t_list **st_a);
void	rrb(t_list **st_a);
void	rrr(t_list **st_a, t_list **st_b);
void	sa(t_list **st_a);
void	sb(t_list **st_a);
void	ss(t_list **st_a, t_list **st_b);
void	mini_sort(t_list **st_a, t_list **st_b, int size_a);
t_list	*stackgen(int ac, char **av);

#endif