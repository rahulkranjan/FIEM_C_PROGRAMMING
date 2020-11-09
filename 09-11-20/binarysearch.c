#include <stdio.h>

int main()
{
    int arr[50], a, b, i, m, n, s;

    printf("Enter number of elements :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d Element :", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter value to find :");
    scanf("%d", &s);

    a = 0;
    b = n - 1;
    m = (a + b) / 2;

    while (a <= b)
    {
        if (arr[m] < s)
        {
            a = m + 1;
        }
        else if (arr[m] == s)
        {
            printf("%d in present at %d", s, m + 1);
            break;
        }
        else
            b = m - 1;
        m = (a + b) / 2;
    }
    if (a > b)
        printf("%d Not found! ", s);

    return 0;
}