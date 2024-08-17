/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:37:51 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:41:44 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_empty(char *av)
{
	while (*av == ' ' && *av)
	{
		av++;
		if (!is_valid(*av))
			return (1);
	}
	if (*av == '\0')
		return (1);
	return (0);
}

int	check_sign(char *av)
{
	int	prev_was_digit;

	prev_was_digit = 0;
	while (*av)
	{
		if (!is_digit(*av))
			prev_was_digit = 0;
		while (*av == ' ')
			av++;
		if (*av == '+' || *av == '-')
		{
			av++;
			if (prev_was_digit || !*av || *av == ' ' || !is_digit(*av))
				return (1);
			prev_was_digit = 0;
		}
		while (is_digit(*av))
		{
			av++;
			prev_was_digit = 1;
		}
		if (*av && !is_digit(*av) && *av != ' ')
			return (1);
	}
	return (0);
}

int	check_digits(char *av)
{
	while (*av)
	{
		while (is_space(*av))
			av++;
		if (*av == '+' || *av == '-')
			av++;
		if (!is_digit(*av) && *av)
			return (4);
		while (is_digit(*av))
			av++;
	}
	return (0);
}

int	check_arg(char *av)
{
	if (check_empty(av))
		return (1);
	if (check_sign(av))
		return (1);
	if (check_digits(av))
		return (1);
	return (0);
}
