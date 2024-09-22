#include <stdio.h>

int main(void)
{
    // You have to know the type, even for the pointer.
    int n = 50;
    printf("%i\n", n);

    // A pointer(reference) to the value.
    printf("%p\n", &n);

    // Go to the address that the point is representing.
    printf("%i\n", *&n);

    // Define a pointer for a int type.
    // Store a the address of n to pointer p.
    // p is the address of an integer.
    int *p = &n;
    printf("%p\n", p);
    printf("%i\n", *p);

    // Without the pointer, variable p will store the address of it's values.
    // But with a pointer, p will point to the value directly.

    // Generally, a pointer is 8 bytes.
}

