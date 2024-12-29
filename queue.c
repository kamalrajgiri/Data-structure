#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue_arr[max];
int front=-1;
int rear=-1;
int isempty();
void enqueue()
{
    int added_item;
    if(rear==max-1)
    {
        printf(" \n Queue is full, cannot insert more element !");
        return;
    }
    else
    {
        if (isempty==1)
        {
            printf("\n Queue is empty,You are going to create a queue .");
            front=0;
        }
    printf("enter the element to add");
    scanf("%d",added_item);
    rear=rear+1;
    queue_arr[rear]=added_item;
    }
}
void dequeue()
{
    if(isempty()==1)
    {
        printf("Queue underflow,no elements to delete \n");
        return;
    }
    else{
        printf("\n Element deleted from queue is %d \n",queue_arr[front]);
        front=front+1;
    }
}
void traverse()
{
    int i;
    if(isempty==1)
    {
        printf("Queue is empty");
        return ;
    }
    else{
        printf("\n Front is %d and queue is : \n",front);
        for(i=front;i<rear;i++)
        {
            printf("%d",queue_arr[i]);
            printf("\n");
        }
    }
}
int isempty()
{
    if(front==-1&& rear==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    
}