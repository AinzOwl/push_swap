/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:08:06 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:52:21 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **st_a)
{
	int	tmp;
	int	tmp2;

	tmp = (*st_a)->value;
	tmp2 = (*st_a)->index;
	(*st_a)->value = (*st_a)->next->value;
	(*st_a)->index = (*st_a)->next->index;
	(*st_a)->next->value = tmp;
	(*st_a)->next->index = tmp2;
	write(1, "sa\n", 3);
}

void	sb(t_list **st_b)
{
	int	tmp;
	int	tmp2;

	tmp = (*st_b)->value;
	tmp2 = (*st_b)->index;
	(*st_b)->value = (*st_b)->next->value;
	(*st_b)->index = (*st_b)->next->index;
	(*st_b)->next->index = tmp2;
	write(1, "sb\n", 3);
}
