/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:11:24 by user              #+#    #+#             */
/*   Updated: 2020/02/12 03:18:12 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
    int start;
    int mid;
    int end;

    if (nb == 0 || nb == 1)
        return nb;
    start = 1;
    end = nb;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (mid * mid == nb)
            return (mid);
        end--;
    }
    return (0);
}

int ft_is_prime(int nb)
{
    int root;
    int i;

    if (nb == 0 || nb == 1)
        return (0);
    root = ft_sqrt(nb);
    i = 2;
    while (i <= root)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char *argv[])
{
    printf("ft_is_prime(%d): %d\n", atoi(argv[1]), ft_is_prime(atoi(argv[1])));
    (void)&argc;
}