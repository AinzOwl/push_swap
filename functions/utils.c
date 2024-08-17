/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:52:50 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/17 00:59:28 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int* resizeAndAdd(int* arr, int old_size, int new_int)
{
    int* new_arr;

	if (arr == NULL) {
        int* new_arr = (int*)malloc(sizeof(int));
        if (new_arr == NULL) {
            ft_printf("Memory allocation failed!\n");
            exit(1);
        }

        new_arr[0] = new_int;
        return new_arr;
    }
    new_arr = (int*)malloc((old_size + 1) * sizeof(int));
    if (new_arr == NULL) {
        ft_printf("Memory allocation failed!\n");
		free(arr);
        exit(1);
    }
    for (int i = 0; i < old_size; i++) {
        new_arr[i] = arr[i];
    }
    new_arr[old_size] = new_int;
    free(arr);
    return new_arr;
}

int ft_atoi(char *av)
{
	long long final;
	int sign;

	if (check_arg(av))
		error("Invalid Argument");
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
		if (final*sign < -2147483648 || final*sign > 2147483647)
			error("Number doesn't fit in int");
		av++;
	}
	return (sign * final);
}

char *skip_space(char *av)
{
	while(*av && is_space(*av))
		av++;
	return av;
}

