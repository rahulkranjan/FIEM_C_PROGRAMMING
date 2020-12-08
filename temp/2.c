#include <stdio.h>
int main()
{
    char str[1000], ch;
    int c = 0;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character : ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++c;
    }

    printf("Frequency of %c = %d", ch, c);
    return 0;
}