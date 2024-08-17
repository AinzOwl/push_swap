/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:12:58 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 07:49:54 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	ra(t_list **st_a)
{
	t_list *first;
	t_list *tmp;
	int		size;
	
	size = lst_size(*st_a);
	if (size && size < 2)
		return ;
	first = *st_a;
	tmp = *st_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	*st_a = first->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **st_b)
{
	t_list *first;
	t_list *tmp;
	int		size;
	
	size = lst_size(*st_b);
	if (size && size < 2)
		return ;
	first = *st_b;
	tmp = *st_b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	*st_b = first->next;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **st_a, t_list **st_b)
{
	ra(st_a);
	rb(st_b);
	write(1, "rr\n", 3);
}