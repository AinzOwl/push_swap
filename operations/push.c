/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:12:58 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:43:06 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **st_a, t_list **st_b)
{
	t_list	*first_b;
	int		size_b;

	size_b = lst_size(*st_b);
	if (st_b == NULL || *st_b == NULL || size_b == 0)
		return ;
	first_b = *st_b;
	*st_b = first_b->next;
	if (*st_a == NULL)
	{
		*st_a = first_b;
		(*st_a)->next = NULL;
	}
	else
	{
		first_b->next = *st_a;
		*st_a = first_b;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list **st_a, t_list **st_b)
{
	t_list	*first_a;
	int		size_a;

	size_a = lst_size(*st_a);
	if (st_a == NULL || *st_a == NULL || size_a == 0)
		return ;
	first_a = *st_a;
	*st_a = first_a->next;
	if (*st_b == NULL)
	{
		*st_b = first_a;
		(*st_b)->next = NULL;
	}
	else
	{
		first_a->next = *st_b;
		*st_b = first_a;
	}
	write(1, "pb\n", 3);
}
