/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 02:51:08 by user              #+#    #+#             */
/*   Updated: 2020/02/12 03:10:33 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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