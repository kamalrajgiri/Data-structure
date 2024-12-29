#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 int insertend(struct node *head, int info)
{
    struct node, *ptr, *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = info;
    new->next = null;
    ptr = head;
    if (ptr != null)
    {
        while (ptr->next != null)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
    }
    else
        head = new;
    return head;
}
int insertbegining(struct node *head, int info)
{
    struct node *new;
    new = (struct node *)malloc(size of(struct node));
    new->data = info;
    new->next = head;
    head = new;
    return head;
}
int insertspecific(struct node *head, int x, int info)
{
    struct node, *ptr, *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = info;
    ptr = head;
    while (ptr->data != x && ptr != null)
    {
        ptr = ptr->next;
    }
    if (ptr->data == x)
    {
        new->next = ptr->next;
        ptr->next = new;
    }
    return head;
}
int delete(x)
{
}
int display()
{
}
int main()
{
    int choice,value;
    printf("MENU!\n");
    printf("-------------------------------------------");
    printf("1.\nInsert at begining");
    printf("2.\nInsert at end");
    printf("3.\nInsert at specific location");
    printf("4.\nDisplay data");
    printf("5.\nDelete data");
    printf("6.\nEnd");
    printf("\nEnter your choice ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter the data to be inserted");
        scanf("%d", &value);
        insertbegining();
        break;
    case 2:
        printf("enter the data to be inserted");
        scanf("%d", &value);
        insertend();
        break;
    case 3:
        printf("enter the data to be inserted");
        scanf("%d", &value);
        insertspecific();
        break;
    case 4:
        printf("The data are :  ");
        display();
        break;
    case 5:
        printf("enter the data to be deleted");
        scanf("%d", &value);
        delete (value);
        break;
    // case 1 : printf("enter the data to be inserted");
    // insertbegining()
    // break ;
    case 6:
        printf("Programme terminated");
        exit (0);
        break;
    }
    return 0;
}