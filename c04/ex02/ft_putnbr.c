/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:07:09 by user              #+#    #+#             */
/*   Updated: 2020/02/15 00:09:33 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    long long_nb;
    char tmp[1];

    long_nb = nb;
    if (long_nb < 0)
    {
        write(1, "-", 1);
        long_nb *= -1;
    }
    if ((long_nb / 10) > 0)
        ft_putnbr((long_nb / 10));
    tmp[0] = long_nb % 10 + '0';
    write(1, &tmp, 1);
}