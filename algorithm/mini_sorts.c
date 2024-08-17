/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 04:59:29 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 08:35:43 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>


void	sort_three(t_list **st_a, int indx)
{
	if((*st_a)->index == indx && (*st_a)->next->index == indx + 1)
		return ;
	else if((*st_a)->index == indx + 1 && (*st_a)->next->index == indx)
		sa(st_a);
	else if((*st_a)->index == indx + 1 && (*st_a)->next->index == indx + 2)
		rra(st_a);
	else if((*st_a)->index == indx + 2 && (*st_a)->next->index == indx)
		ra(st_a);
	else if((*st_a)->index == indx + 2 && (*st_a)->next->index == indx + 1)
	{
		ra(st_a);
		sa(st_a);
	}
	else if((*st_a)->index ==  indx && (*st_a)->next->index == indx + 2)
	{
		ra(st_a);
		sa(st_a);
		rra(st_a);
	}
}
void	sort_four(t_list **st_a, t_list **st_b)
{
	int i;

	if (!st_a || !*st_a) return;
	i = 0;
	while (i < 4)
	{
		if ((*st_a)->index == 0)
        {
            pb(st_a, st_b);
            break;
        }
        ra(st_a);
        i++;
	}
	sort_three(st_a, 1);
	pa(st_a, st_b);
}
void	sort_five(t_list **st_a, t_list **st_b)
{
	int count;

	count = 0;
	while (count < 2)
	{
		if ((*st_a)->index == 0 || (*st_a)->index == 1)
		{
			pb(st_a, st_b);
			count++;
		}
		else
			ra(st_a);
	}
	sort_three(st_a, 2);
	if ((*st_b)->index < (*st_b)->next->index)
		sb(st_b);
	pa(st_a, st_b);
	pa(st_a, st_b);
}

void	mini_sort(t_list **st_a, t_list **st_b, int size_a)
{
	if (size_a == 2)
		sa(st_a);
	else if (size_a == 3)
	{
		sort_three(st_a, 0);
	}
	else if (size_a == 4)
	{
		sort_four(st_a, st_b);
	}
	else if (size_a == 5)
	{
		sort_five(st_a, st_b);
	}
	lst_delete(*st_a);
	return ;
}