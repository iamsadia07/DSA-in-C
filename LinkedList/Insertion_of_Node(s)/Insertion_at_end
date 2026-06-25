#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    // Existing list
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;

    head->next = second;
    second->next = NULL;

    // New node 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = NULL;

    // Traverse to last node..
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

   
    temp->next = newNode;

    
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
