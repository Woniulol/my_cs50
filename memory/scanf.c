#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    // You specify a chuck of memory for the value scan.
    scanf("%i", &x);
    printf("x: %i \n", x);

    // We still don't how much memory we are going to allocate
    char s[3];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s \n", s);
}