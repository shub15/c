#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define size 4
int rear = 0, front = 0;
int qa[size];

void add()
{
    int val;
    if ((rear+1) % size == front)
    {
        printf("\n Queue is full");
    }
    printf("\n Enter Element");
    printf("\n");
    scanf("%d", &val);
    qa[rear] = val;
    rear = (rear + 1) % size;
}
void delete()
{
    if (front == rear)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("\n Delete Element %d", qa[front]);
        front = (front + 1) % size;
    }
}
void display()
{
    int i;
    if (front == rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue is ");
        i = front;
        while (i != rear) {
            printf("%d ", qa[i]);
            i = (i + 1) % size;
        }
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n Menu");
        printf("\n 1.Add");
        printf("\n 2.Delete");
        printf("\n 3.Display");
        printf("\n 4.Exit");
        printf("\n Enter your choice");
        printf("\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            break;

        default:
            printf("\n wrong choice");
            break;
        }
    } while (choice != 4);

    return 0;
}