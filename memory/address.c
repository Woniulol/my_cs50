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

    // Technically speaking, there is no string.
    // A string is a variable that contains the address of a character (which could be the start of multiple character)
    // So, a string is just the address of a single character, and the end of the string is denoted by a null terminator (0 for 8 bits)

    char *s = "EMMA";
    // %s has special meaning toward %s, it will print every thing starting from &s all the way to null terminator
    printf("%s\n", s);
    printf("%p\n", s);

    // Pointer arithmetic
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
    printf("%c\n", *(s+4));

    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    printf("%i\n", (int) s[4]);
}

