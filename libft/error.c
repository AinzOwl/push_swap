/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:49:29 by efelaous          #+#    #+#             */
/*   Updated: 2024/08/16 20:49:42 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void error(char *error)
{
    write(1, "\n\033[31m", 6); 
    while (*error) {
        write(1, error, 1);
        error++;
    }
    write(1, "\033[0m\n", 5);
    exit(1);
}