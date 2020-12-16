#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int item;
    struct Node *next;
};

void insertAtBeginning(struct Node **ref, int data)
{
    // Allocate memory to a node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // insert the item
    new_node->item = data;
    new_node->next = (*ref);

    // Move head to new node
    (*ref) = new_node;
}

// Insert a node after a node
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
    // Find the key to be deleted
    while (temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present
    if (temp == NULL)
        return;

    // Remove the node
    prev->next = temp->next;

    free(temp);
}

// Print the linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->item);
        node = node->next;
    }
}

// Driver program
int main()
{
    struct Node *head = NULL;
    int n, m, val;
    char response[2];
    printf("1.Single linkedlist\n2.Double circular Linked List:");
    scanf("%d", &n);
    if (n == 1)
    {
        do
        {
            printf("1.Insert at the end\n2.Insert at Beginning\n3.Insert in the middle:\n");
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
                printf("Want to try again y/n:");
                scanf("%s", response);
            }
            printf("Linked list: ");
            printList(head);
            printf("\nWant to try again: y/n :");
            scanf("%s", response);
        } while (response[2] = 'y');
    }

    // printf("\nAfter deleting an element: ");
    // deleteNode(&head, 3);
    // printList(head);
}
