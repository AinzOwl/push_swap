/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:40:26 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 04:50:49 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "push_swap.h"


int main(int ac, char **av)
{
	t_list *stack = stackgen(ac, av);
	sort_indexes(stack);
	// sa(&stack);
	t_list *tmp = stack;
	while (stack)
	{
		ft_printf("[%d]: %d, ", stack->index, stack->value);
		stack = stack->next;
	}
	lst_delete(tmp);
	ft_printf("\n");
}
