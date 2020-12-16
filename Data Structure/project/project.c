#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int item;
    struct Node *next;
};

struct Node1
{
    int data;
    struct Node1 *next;
    struct Node1 *prev;
};

void insertAtBeginning(struct Node **ref, int data)
{

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->item = data;
    new_node->next = (*ref);

    (*ref) = new_node;
}

void insertAfter(struct Node *node, int data)
{
    if (node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->item = data;
    new_node->next = node->next;
    node->next = new_node;
}

void insertAtEnd(struct Node **ref, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *ref;

    new_node->item = data;
    new_node->next = NULL;

    if (*ref == NULL)
    {
        *ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void deleteNode(struct Node **ref, int key)
{
    struct Node *temp = *ref, *prev;

    if (temp != NULL && temp->item == key)
    {
        *ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp);
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->item);
        node = node->next;
    }
}
// ----------------------//
// double linkedlist     //
// ----------------------//

void push(struct Node1 **head_ref, int new_data)
{

    struct Node1 *new_node = (struct Node1 *)malloc(sizeof(struct Node1));

    new_node->data = new_data;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void insertAfter1(struct Node1 *prev_node, int new_data)
{

    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node1 *new_node = (struct Node1 *)malloc(sizeof(struct Node1));

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;

    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

void append(struct Node1 **head_ref, int new_data)
{

    struct Node1 *new_node = (struct Node1 *)malloc(sizeof(struct Node1));

    struct Node1 *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;

    new_node->prev = last;

    return;
}

int main()
{
    struct Node *head = NULL;
    struct Node1 *head1 = NULL;
    int n, m, val, p, a, response;
    // char ;
    printf("1.Single linkedlist\n2.Double circular Linked List:");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("\n\n1.Insertion\n2.Deletion");
        scanf("%d", &p);
        if (p == 1)
        {
            do
            {
                printf("\n\n1.Insert at the end\n2.Insert at Beginning\n3.Insert in the middle:\n");
                scanf("%d", &m);
                if (m == 1)
                {
                    printf("Enter the value :");
                    scanf("%d", &val);
                    insertAtEnd(&head, val);
                }
                else if (m == 2)
                {
                    printf("Enter the value :");
                    scanf("%d", &val);
                    insertAtBeginning(&head, val);
                }
                else if (m == 3)
                {
                    printf("Enter the value :");
                    scanf("%d", &val);
                    insertAfter(head->next, val);
                }
                else
                {
                    printf("Wrong Input\n");
                }
                printf("Linked list: ");
                printList(head);
                printf("\nWant to try again: 0/1 :\n\n");
                scanf("%d", &response);
            } while (response == 0);
        }
        else if (p == 2)
        {

            printf("Enter the element to be deleted:");
            scanf("%d", &a);
            deleteNode(&head, a);
            printList(head);
        }
        else
        {
            printf("Worng Input");
        }
    }

    else if (n == 2)
    {
        printf("\n\n1.Insertion\n2.Deletion");
        scanf("%d", &p);
        if (p == 1)
        {
            do
            {
                printf("\n\n1.Insert at the end\n2.Insert at Beginning\n3.Insert in the middle:\n");
                scanf("%d", &m);
                if (m == 1)
                {
                    printf("Enter the value :");
                    scanf("%d", &val);
                    append(&head1, val);
                }
                else if (m == 2)
                {
                    printf("Enter the value :");
                    scanf("%d", &val);
                    push(&head1, val);
                }
                else if (m == 3)
                {
                    printf("Enter the value :");
                    scanf("%d", &val);
                    insertAfter1(head1->next, val);
                }
                else
                {
                    printf("Wrong Input\n");
                }
                printf("Double Linkedlist: ");

                printf("\nWant to try again: 0/1 :\n\n");
                scanf("%d", &response);
            } while (response == 0);
        }

        else
        {
            printf("Worng Input");
        }
    }
}
