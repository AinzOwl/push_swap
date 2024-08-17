/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:52:50 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:51:19 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *av)
{
	long long	final;
	int			sign;

	final = 0;
	sign = 1;
	while (*av && *av == ' ')
		av++;
	if (*av == '-' || *av == '+')
	{
		if (*av == '-')
			sign = -1;
		av++;
	}
	while (*av && *av >= '0' && *av <= '9')
	{
		final = final * 10 + (*av - '0');
		if (final * sign < -2147483648 || final * sign > 2147483647)
			error("Error");
		av++;
	}
	return (sign * final);
}

char	*skip_space(char *av)
{
	while (*av && is_space(*av))
		av++;
	return (av);
}

int	is_unique(t_list *lst, int val)
{
	while (lst)
	{
		if (lst->value == val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	sort_indexes(t_list *head)
{
	int		index;
	t_list	*current;
	t_list	*compare;

	current = head;
	while (current)
	{
		index = 0;
		compare = head;
		while (compare)
		{
			if (current->value > compare->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}
