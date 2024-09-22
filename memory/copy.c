# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main(void)
{
    char *s = malloc(5 * sizeof(char));
    printf("s: ");
    scanf("%s", s);

    char *t = malloc(strlen(s) + 1);
    for (int i = 0, n = strlen(s) + 1; i < n; i ++)
    {
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);

    // We have some built in thing.

    char *t2 = malloc(strlen(s) + 1);
    strcpy(t2, s);
    t2[0] = toupper(t2[0]);
    printf("s: %s\n", s);
    printf("t2: %s\n", t2);

    free(t2);

}