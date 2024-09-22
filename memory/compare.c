#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 30;
    int j = 30;

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    char *s1 = malloc(5 * sizeof(char));
    char *s2 = malloc(5 * sizeof(char));

    printf("s1:");
    scanf("%s", s1);

    printf("s2:");
    scanf("%s", s2);

    // Even if you input the same stirng, but since the memory location is different, the comparison will return a False.
    // You are comparing the address, not the value of in that address.
    if (s1 == s2)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    free(s1);
    free(s2);

    if (*s1 == *s2)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}