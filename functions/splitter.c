/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 00:30:46 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 10:05:28 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int words_num(char *av)
{
	int i;

	av = skip_space(av);
	i = 0;
	while (*av)
	{
		while(*av != ' ' && *av)
			av++;
		i++;
		av = skip_space(av);
	}
	return i;
}

int *split(char *av, int *size)
{
	int *splitted;
	int i = 0;

	if (check_arg(av))
		return NULL;
	av = skip_space(av);
	*size = words_num(av);
	splitted = malloc(sizeof(int) * *size);
	if (!splitted)
		return (NULL);
	while (i < *size)
	{
		if (check_arg(av))
			return NULL;
		splitted[i] = ft_atoi(av);
		while (is_digit(*av) || is_sign(*av))
			av++;
		while (is_space(*av))
			av++;
		i++;
	}
	return splitted;
}

t_list *stackgen(int ac, char **av)
{
	int size = 0;
	t_list *stacka;
	int *splited;

	int i = 1;
	int j = 0;
	stacka = NULL;
	while (i < ac)
	{
		j = 0;
		splited = split(av[i], &size);
		if (splited == NULL)
				error_lst("Error", stacka);
		while (j < size)
		{
			if (!is_unique(stacka, splited[j]))
				error_dlst("Error", stacka, splited);
			stacka = lst_add(stacka, splited[j]);
			j++;
		}
		free(splited);
		size = 0;
		i++;
	}
	return stacka;
}
