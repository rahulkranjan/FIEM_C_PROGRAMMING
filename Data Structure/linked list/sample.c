#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};

void linkedlist(struct node *p)
{
    while (p != NULL)
    {
        printf("%d", p->value);
        p = p->next;
    }
}

int main()

{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    one->value = 1;
    two->value = 2;
    three->value = 3;
    four->value = 4;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    head = one;
    linkedlist(head);
}