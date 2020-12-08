#include <stdio.h>
void main()
{
    int i;
    char str[30];
    printf("Enter the character name :");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
            i;
        else
        {
            printf("%c", str[i]);
        }
    }
}