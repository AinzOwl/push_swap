/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 01:37:22 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:43:31 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_new(int value)
{
	t_list	*stacka;

	stacka = (t_list *)malloc(sizeof(t_list));
	if (stacka == NULL)
		error("unable to malloc stacka");
	stacka->value = value;
	stacka->index = 0;
	stacka->next = NULL;
	return (stacka);
}
