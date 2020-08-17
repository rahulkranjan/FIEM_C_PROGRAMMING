#include <stdio.h>
int sum(int x[]);
int main()

{
    int i, n, a, b, c;
    int x[100], y;

    printf("Enter The no of arrays :");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("enter values %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    a = sum(x);
    b = a / n;
    printf("sum is %d:", a);
    printf("avg is %d:", b);

    return 0;
}

int sum(int x[])
{
    int c = 0, j;
    for (j = 0; j < 20; ++j)
    {
        c += x[j];
    }
    return c;
}
