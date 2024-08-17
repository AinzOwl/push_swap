/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:03:41 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 11:41:59 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(char *error)
{
	write(2, "\033[31m", 6);
	while (*error)
	{
		write(2, error, 1);
		error++;
	}
	write(2, "\033[0m\n", 5);
	exit(1);
}

void	error_d(char *error, void *d)
{
	free(d);
	write(2, "\033[31m", 6);
	while (*error)
	{
		write(2, error, 1);
		error++;
	}
	write(2, "\033[0m\n", 5);
	exit(1);
}

void	error_lst(char *error, t_list *lst)
{
	lst_delete(lst);
	write(2, "\033[31m", 6);
	while (*error)
	{
		write(2, error, 1);
		error++;
	}
	write(2, "\033[0m\n", 5);
	exit(1);
}

void	error_dlst(char *error, t_list *lst, void *d)
{
	lst_delete(lst);
	free(d);
	write(2, "\033[31m", 6);
	while (*error)
	{
		write(2, error, 1);
		error++;
	}
	write(2, "\033[0m\n", 5);
	exit(1);
}
