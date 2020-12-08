#include <stdio.h>
int main()
{
    int m, n, a[100][100], b[100][100], sum[100][100], i, j;

    printf("rows :");
    scanf("%d", &m);

    printf("columns :");
    scanf("%d", &n);

    printf("Enter 1st matrix \n");

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("enter values a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2st matrix \n");

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("enter values b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum is : \n");

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d   ", sum[i][j]);
        }
    }

    return 0;
}