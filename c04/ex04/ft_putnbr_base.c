/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:25:54 by user              #+#    #+#             */
/*   Updated: 2020/02/15 00:34:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int check_base(char *base)
{
    int i;
    int j;

    if (base == 0 || ft_strlen(base) < 2)
        return (0);
    i = 0;
    while (base[i])
    {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    long long_nb;
    char tmp[1];
    
    if (check_base(base) == 0)
        return;
    long_nb = nbr;
    if (long_nb < 0)
    {
        write(1, "-", 1);
        long_nb *= -1;
    }
    if ((long_nb / ft_strlen(base)) > 0)
        ft_putnbr_base(long_nb / ft_strlen(base), base);
    tmp[0] = base[long_nb % ft_strlen(base)];
    write(1, &tmp, 1);
}