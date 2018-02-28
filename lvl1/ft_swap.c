/*  Assignment name  : ft_swap
    Expected files   : ft_swap.c
    Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
-----------------------------------------------*/
#include <stdio.h>

void ft_swap(int *a, int *b) {
    /* code */
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int first;
    int second;

    first = 42;
    second = 24;
    printf("First number is %i, second number is %i\n", first, second);
    ft_swap(&first, &second);
    printf("After swap:\nFirst number is %i, second number is %i\n", first, second);
    return (0);
}
