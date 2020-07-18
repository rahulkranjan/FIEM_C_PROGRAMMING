#include <stdio.h>
int main()
{
    int i, n;
    float a[100], sum = 0.0, avr;

    printf("Enter the number :");
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf("Error! ,Enter number between 1 to 100.\n");
        printf("Enter the number :");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d. Enter the values :", i + 1);
        scanf("%f", &a[i]);
        sum += a[i];
    }
    avr = sum / n;
    printf("The average is :  %.2f", avr);

    return 0;
}