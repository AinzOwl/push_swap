/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:40:16 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 04:10:24 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	rra(t_list **st_a)
{
	t_list	*last;
	t_list	*second_last;

	if (*st_a == NULL || (*st_a)->next == NULL)
		return;
	last = *st_a;
	second_last = NULL;
	while(last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *st_a;
	*st_a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_list **st_b)
{
	t_list	*last;
	t_list	*second_last;

	if (*st_b == NULL || (*st_b)->next == NULL)
		return;
	last = *st_b;
	second_last = NULL;
	while(last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *st_b;
	*st_b = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **st_a, t_list **st_b)
{
	rra(st_a);
	rrb(st_b);
	write(1, "rr\n", 3);
}