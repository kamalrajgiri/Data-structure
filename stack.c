#include <stdio.h>
#include <stdlib.h>
#define maxsize 100
struct stack
{
    int stack[maxsize];
    int top;
};
void push(struct stack *pu)
{
    int item;
    if (pu->top == maxsize - 1)
    {
        printf("\n the stack is full");
        exit(0);
    }
    else
    {
        printf("\n enter the element to be inserted");
        scanf("%d", &item);
        pu->stack[++pu->top] = item;
    }
}
void pop(struct stack *po)
{
    int item;
    if (po->top == -1)
    {
        printf("\n\n stack underflow,stack cannot be empty.");
        exit(0);
    }
    else
    {
        item = po->stack[po->top--];
        printf("Deleted stack is %i", item);
    }
}
void traverse(struct stack *tr)
{
    int i;
    if (tr->top == -1)
    {
        printf(" \n stack is empty.");
    }
    for (i = tr->top; i >= 0; i--)
    {
        printf("\n %d", tr->stack[i]);
    }
}
int main()
{
    int choice;
    int check = 1;
    struct stack *s;
    s = (struct stack *)malloc(100 * sizeof(struct stack));
    s->top = -1;
    do
    {
        printf("\n 1.Push Operation");
        printf("\n 2.Pop Operation");
        printf("\n 3.Traverse Operation");
        printf("\n\n Enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(s);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            traverse(s);
            break;
        default:
            printf("\n You entered a wrong choice");
        }
        printf("press 1 to continue and 2 to leave the environment");
        scanf("%d",&choice);
    } while (check != 1);
    return 0;
}