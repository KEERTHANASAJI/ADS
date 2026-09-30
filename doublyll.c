#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} *head, *temp, *newnode;
int i;
struct Node* createNode(int data)
{
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}
void insertAtBeginning(int data){
    newnode = createNode(data);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insertAtEnd(int data){
    newnode = createNode(data);
    if (head == NULL) {
        head = newnode;
        return;
    }
    temp = head;
    while (temp->next != NULL) 
        temp = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
}
void insertAtPosition(int data, int position){
    if (position < 1) {
        printf("Position should be >= 1.\n");
        return;
    }
    if (position == 1) {
        insertAtBeginning(data);
        return;
    }
    newnode = createNode(data);
    temp = head;
    for (i = 1; temp != NULL && i < position - 1; i++) 
        temp = temp->next;
    if (temp == NULL) {
        printf("Position greater than the number of nodes.\n");
        free(newnode);
        return;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL) 
        temp->next->prev = newnode;
    temp->next = newnode;
}
void deleteAtBeginning(){
    if (head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    temp = head;
    head = head->next;
    if (head != NULL) 
        head->prev = NULL;
    free(temp);
}
void deleteAtEnd(){
    if (head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    temp = head;
    if (temp->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) 
        temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
}
void deleteAtPosition(int position){
    if (head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    if (position == 1) {
        deleteAtBeginning();
        return;
    }
    temp = head;
    for (i = 1; temp != NULL && i < position; i++) 
        temp = temp->next;
    if (temp == NULL) {
        printf("Position is greater than the number of nodes.\n");
        return;
    }
    if (temp->next != NULL) 
        temp->next->prev = temp->prev;
    if (temp->prev != NULL) 
        temp->prev->next = temp->next;
    free(temp);
}
void display(){
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    temp = head;
    while (temp->next != NULL) 
        temp = temp->next;
    printf("Reverse List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}
int main(){
    int choice, data, position;
    head = NULL;
    do {
        printf("DOUBLY LINKED LIST MENU \n1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n4. Delete from Beginning\n5. Delete from End\n6. Delete from Position\n7. Display Reverse\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            insertAtPosition(data, position);
            break;
        case 4:
            deleteAtBeginning();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            printf("Enter position: ");
            scanf("%d", &position);
            deleteAtPosition(position);
            break;
        case 7:
            display();
            break;
        case 8:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 8);
    return 0;
}
