/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:25:14 by user              #+#    #+#             */
/*   Updated: 2020/02/12 03:27:24 by user             ###   ########.fr       */
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
    ft_putstr(argv[0]);
    (void)&argc;
}