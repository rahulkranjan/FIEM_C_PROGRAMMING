#include <stdio.h>
int main()
{
    char ary[30] = {'a', 'n', 'i', 'l'}; // It is a simple character array and cannot be treated as string
    int j = 0;
    char ary1[30] = {'a', 'n', 'i', 'l', '\0', 'j'}; //It is a character array which can be treated as string

    for (j = 0; ary1[j] != '\0'; j++)
        printf("%c", ary1[j]);

    printf("\n%s", ary1);

    return 0;
}