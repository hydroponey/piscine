/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 23:48:01 by user              #+#    #+#             */
/*   Updated: 2020/02/14 23:53:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char **argv)
{
    (void)&argc;
    printf("ft_strncmp\tstrncmp\n");
    printf("\t%d\t%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])), strncmp(argv[1], argv[2], atoi(argv[3])));
}