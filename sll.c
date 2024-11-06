#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head;
    struct node *second;
    struct node *last;
    head = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = last;
    last->data = 30;
    last->next = NULL;
    printf("Data in the linked list are:\n");
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}