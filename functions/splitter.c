/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 00:30:46 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 01:01:00 by efelaous         ###   ########.fr       */
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
		error("Invalid Argument");
	av = skip_space(av);
	*size = words_num(av);
	splitted = malloc(sizeof(int) * *size);
	if (!splitted)
		return (NULL);
	while (i < *size)
	{
		splitted[i] = ft_atoi(av);
		while (is_digit(*av))
			av++;
		while (is_space(*av))
			av++;
		i++;
	}
	return splitted;
}
