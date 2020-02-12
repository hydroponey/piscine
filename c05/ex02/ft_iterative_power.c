/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 02:23:12 by user              #+#    #+#             */
/*   Updated: 2020/02/12 02:30:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int ret;

    ret = nb;
    if (power < 0)
        return (0);
    if ((nb == 0 && power == 0) || power == 0)
        return (1);
    if (power == 1)
        return (nb);
    while (power-- > 1)
    {
        ret *= nb;
    }
    return ret;
}