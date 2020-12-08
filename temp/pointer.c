#include <stdio.h>

int main()
{

    int *p;
    // int v = 10;
    int v[3] = {6, 3, 7};

    p = &v[0];

    printf("Address of v: %x\n", &v[0]);

    printf("Address of v using p: %x\n", p); //p is holding address of v, i.e. &v

    printf("Address of p: %x\n", &p); //But since p itself is a variable(pointer variable) it has its own address

    printf("Value at the address of v: %d\n", *(&v[0]));

    printf("Value at the address of v using pointer: %d\n", *p); // since p stores &v. Therefore *p and *(&v) are same

    printf("Incrementing the value of v through p: %d %d\n", ++*p, ++(*p));
    printf("Incrementing the array using pointer : %d\n", *(p + 2));
    return 0;
}