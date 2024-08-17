/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:46:18 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/16 23:17:44 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_sign(char c)
{
    return (c == '-' || c == '+');
}

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return (c == ' ');
}

int	is_valid(char c)
{
	return (is_digit(c) || is_sign(c) || is_space(c));
}
