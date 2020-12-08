#include <stdio.h>
#include <math.h>
int main()
{
    int i, x, y;
    printf("Enter a number :");
    scanf("%d", &x);
    printf("Enter a power :");
    scanf("%d", &y);
    double result = pow(x, y);
    printf("%.2lf", result);

    return 0;
}