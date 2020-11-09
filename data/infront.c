#include <stdio.h>
#include <stdlib.h>
typedef struct stud
{
    int data;
    struct stud *next;
} Node;
void addNodeBegin(Node **, Node **);
void display(Node *);
Node *start, *ptr;
int main()
{
    start = NULL;
    int choice = 1;
    while (choice == 1)
    {
        ptr = (Node *)malloc(sizeof(Node));
        printf("Enter the value of new node: ");
        scanf("%d", &ptr->data);
        ptr->next = NULL;
        addNodeBegin(&start, &ptr);
        printf("Do you want more (0/1)? ");
        scanf("%d", &choice);
    }

    display(start);
}
void addNodeBegin(Node **start, Node **ptr)
{
    Node *temp;
    if ((*start) == NULL)
        *start = *ptr;
    else
    {
        (*ptr)->next = *start;
        *start = *ptr;
    }
}
void display(Node *st)
{
    Node *tmp;
    for (tmp = st; tmp; tmp = tmp->next)
        printf(" %d", tmp->data);
}