/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 04:56:53 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:48:14 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list *st, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (st)
	{
		if (st->index == index)
			return (i);
		st = st->next;
		i++;
	}
	return (-1);
}

void	pa_b(t_list **st_a, t_list **st_b)
{
	unsigned int	i;
	int				j;
	unsigned int	size;

	i = 0;
	size = lst_size(*st_a);
	j = size / 15;
	if (size <= 100)
		j = size / 7;
	while (*st_a)
	{
		if ((*st_a)->index <= i)
		{
			pb(st_a, st_b);
			i++;
		}
		else if ((*st_a)->index <= i + j)
		{
			pb(st_a, st_b);
			rb(st_b);
			i++;
		}
		else
			ra(st_a);
	}
}

void	pb_a(t_list **st_a, t_list **st_b)
{
	unsigned int	index;
	unsigned int	size;

	while (*st_b)
	{
		size = lst_size(*st_b);
		index = get_index(*st_b, size - 1);
		if (index <= size / 2)
		{
			while ((*st_b)->index != size - 1)
				rb(st_b);
		}
		else
		{
			while ((*st_b)->index != size - 1)
				rrb(st_b);
		}
		pa(st_a, st_b);
	}
}

void	sort(t_list **st_a, t_list **st_b)
{
	int	size_a;

	size_a = lst_size(*st_a);
	if (size_a >= 2 && size_a <= 5)
		mini_sort(st_a, st_b, size_a);
	else if (size_a > 5)
	{
		pa_b(st_a, st_b);
		pb_a(st_a, st_b);
	}
}

int	main(int ac, char **av)
{
	t_list	*st_a;
	t_list	*st_b;
	t_list	*tmp;
	int		sorted;

	if (ac == 1)
		exit(0);
	st_a = stackgen(ac, av);
	st_b = NULL;
	sort_indexes(st_a);
	tmp = st_a;
	sorted = 1;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
		{
			sorted = 0;
			break ;
		}
		tmp = tmp->next;
	}
	if (sorted)
		exit(0);
	sort(&st_a, &st_b);
}
