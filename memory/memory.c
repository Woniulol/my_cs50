#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    // Warning: Buffer overflow
    x[10] = 0;
    free(x);
}

int main(void)
{
    f();
    return 0;
}

