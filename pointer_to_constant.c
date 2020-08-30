#include <stdio.h>

int main()
{

    int *p;
    int v[3] = {6, 3, 8};

    p = &v[0];

    printf("Array is a pointer: %d(v[1]) %d(*(v+1))\n", v[1], *(v + 1));

    *v++;
    printf("\n%d %d %d\n", *(v + 0), *(v + 1), *(v + 2));

    // printf("Accessing the array using pointer: %d %d\n", *p,*(p+1));

    return 0;
}