#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct node *next;
} node;

int main()
{
    node *head = malloc(sizeof(node));

    head->data = 5;
    head->next = NULL;

    node *current = malloc(sizeof(node));

    current->data = 10;
    current->next = NULL;
    head->next = current;

    node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}