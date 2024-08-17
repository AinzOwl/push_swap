/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:40:26 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 01:09:19 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// resizeAndAdd(int* arr, int old_size, int new_int)
int main(int ac, char **av)
{
	int size = 0;
	int stack_size = 0;
	int *stacka;
	// int i = 0;
	// while (i < size)
	// {
	// 	ft_printf("%d\n", splited[i]);
	// 	i++;
	// }
	int i = 1;
	int j = 0;
	stacka = NULL;
	int *splited;
	while (i < ac)
	{
		j = 0;
		splited = split(av[i], &size);
		while (j < size)
		{
			stacka = resizeAndAdd(stacka, stack_size, splited[j]);
			stack_size++;
			j++;
		}
		size = 0;
		i++;
	}
	i = 0;
	while (i < stack_size)
	{
		ft_printf("%d, ", stacka[i]);
		i++;
	}
	ft_printf("\n");
}