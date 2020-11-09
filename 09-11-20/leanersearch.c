#include <stdio.h>

int main()
{
    int i, arr[50], j, n, m;

    printf("Enter the number of values :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d Element :", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search :");

    scanf("%d", &m);

    for (j = 0; j < n; j++)
    {
        if (arr[j] == m)
        {
            printf("%d in present at %d", m, j + 1);
            break;
        }

        else if (j == n)
        {
            printf("%d Not found!", m);
        }
    }

    return 0;
}