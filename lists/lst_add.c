/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 01:39:20 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:29:57 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_add(t_list *lst, int value)
{
	t_list	*stack;

	if (lst == NULL)
		return (lst_new(value));
	stack = lst;
	while (stack->next != NULL)
		stack = stack->next;
	stack->next = lst_new(value);
	return (lst);
}
