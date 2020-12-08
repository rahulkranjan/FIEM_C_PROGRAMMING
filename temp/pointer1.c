#include <stdio.h>
// const int ARRAY_SIZE = 5;
int main()
{
    int *p, c;
    int arr[5] = {0, 2, 5, 6, 4};
    p = &arr[0];
    for (c = 0; c <= 4; c++)
    {
        printf("%d\n", *p);
    }

    return 0;
}