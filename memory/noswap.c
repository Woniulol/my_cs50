#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x: %i, y: %i \n", x, y);

    // When you pass input to the function, you are passing the copy of the value.
    // So the copy (a and b) are swapped, but the original value (x and y) are not swapped.
    swap(x, y);

    printf("x: %i, y: %i \n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}