#include <stdio.h>

int main()
{
    char ary1[4] = {'M', 'o', 'u', '\0'};

    printf("Address of the first location: %X", &ary1[0]);
    printf("\nAddress of the second location: %X", &ary1[1]);
    printf("\nAddress of the third location: %X", &ary1[2]);
    printf("\nAddress of the fourth location: %X", &ary1[3]);

    printf("\nThe array: %s", ary1);
    printf("\nThe base address of the array: %X", ary1);
    // printf("\"quoted string\"");
    return 0;
}