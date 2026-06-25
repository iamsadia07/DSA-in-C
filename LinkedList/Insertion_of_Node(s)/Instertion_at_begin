#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    // Existing list
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 20;
    second->data = 30;

    head->next = second;
    second->next = NULL;

    // New node 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;

    // Insertion 
    newNode->next = head;
    head = newNode;

    
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
