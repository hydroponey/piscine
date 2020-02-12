#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int ret;

    if (nb < 0)
        return (0);
    ret = nb;
    while (nb > 1)
        ret *= --nb;
    return (ret);
}

int main()
{
    printf("5! = %d\n", ft_iterative_factorial(5));
}