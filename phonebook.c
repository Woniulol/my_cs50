#include<string.h>
#include<stdio.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    char *name = "EMMA";
    char *number = "123456";

    // File printf
    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}