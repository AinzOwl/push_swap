/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:13:58 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 08:35:29 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lst_size(t_list *stack)
{
	int	i;

	if (!stack)
		return 0;
	i = 1;
	while (stack->next)
	{
		stack = stack->next;
		i++;
	}
	return i;
}
