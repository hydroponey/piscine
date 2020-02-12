/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:28:06 by user              #+#    #+#             */
/*   Updated: 2020/02/12 03:33:34 by user             ###   ########.fr       */
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

    i = argc - 1;
    while (i > 0)
        ft_putstr(argv[i--]);
}