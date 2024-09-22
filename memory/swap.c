#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    // Cannot write something like int *x = 1;

    printf("x: %i, y: %i \n", x, y);
    swap(&x, &y);
    printf("x: %i, y: %i \n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a; // *a will lead to you x
    *a = *b;
    *b = tmp;
}
