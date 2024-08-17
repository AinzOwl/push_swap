/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:50:17 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 01:01:27 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		is_sign(char c);
int		is_digit(char c);
int		is_space(char c);
int		is_valid(char c);
int		check_arg(char *av);
void	error(char *error);
int		ft_atoi(char *av);
char	*skip_space(char *av);
int		*resizeAndAdd(int* arr, int old_size, int new_int);
int		*split(char *av, int *size);

#endif