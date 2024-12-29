//Inserting and Deleting of data from specific position
#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a node
struct Node {
    int data;
    struct Node* next;
};
// For inserting a data in the node
void insertnode(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("The position is out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
// Deleting the data from the node.
void deletenode(struct Node** head, int position) {
    if (*head == NULL) {
        printf("No data found, the list is empty.\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for (int i = 0; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("The position is out of range.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}
//To show the inserting data in the node
void Display(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    int choice, data, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert node\n");
        printf("2. Delete node\n");
        printf("3. Display Data \n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                printf("Enter the position to insert the node: ");
                scanf("%d", &position);
                insertnode(&head, data, position);
                break;
            case 2:
                printf("Enter the position to delete the node: ");
                scanf("%d", &position);
                deletenode(&head, position);
                break;
            case 3:
                printf("Linked List: ");
                Display(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}