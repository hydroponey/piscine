/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:09:39 by user              #+#    #+#             */
/*   Updated: 2020/02/15 00:34:07 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_putnbr_base(int nbr, char *base);

int main(int argc, char **argv)
{
    (void)&argc;
    ft_putnbr_base(atoi(argv[1]), argv[2]);
    return (0);
}