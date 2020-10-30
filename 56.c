#include <stdio.h>
const int ARRAY_SIZE = 5;
int main()
{
    /* first, declare and set an array of five integers:    */
    int array_of_integers[] = {5, 10, 20, 40, 80};
    int arry2[3] = {15, 17, 18};
    int arry3[2] = {6, 1};
    int arry4[3] = {1, 2, 3};
    int arry5[2] = {12, 14};
    /* next, declare an array of five pointers-to-integers: */
    int i, *array_of_pointers[ARRAY_SIZE];

    array_of_pointers[0] = &array_of_integers[0];

    array_of_pointers[1] = &arry2[0];
    array_of_pointers[2] = &arry3[0];

    array_of_pointers[3] = &arry4[0];

    array_of_pointers[4] = &arry5[0];

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        /* print the values of the integers pointed to 
         by the pointers:                                  */
        printf("array_of_integers[%d] = %d\n", i, *(array_of_pointers[i] + 1));
    }
    return 0;
}