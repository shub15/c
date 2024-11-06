#include <limits.h>  
#include <stdio.h>  
#include <stdlib.h>  
#define size 20  
int rear = -1, front = -1;
int qa[size];

void add(){
    int val;
    if(rear == size - 1){
        printf("\n Queue is full");
    } else if (front == -1 ) {
        front = 0;
    }
    printf("\n Enter Element");
    printf("\n");
    scanf("%d", &val);
    rear++;
    qa[rear] = val;
}
void delete(){
    if (front == -1 || front > rear) {
        printf("\n Queue is Empty");
    } else {
        printf("\n Delete Element %d", qa[front]);
        front++;
    }
    
}
void display(){
    int i;
    if (front == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue is ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d", qa[i]);
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
            delete();
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