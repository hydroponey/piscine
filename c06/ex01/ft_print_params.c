/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:28:06 by user              #+#    #+#             */
/*   Updated: 2020/02/12 03:30:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    char tmp;

    tmp = '\n';
    while (*str != '\0')
        write(1, str++, 1);
    write(1, &tmp, 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    while (i < argc)
        ft_putstr(argv[i++]);
}