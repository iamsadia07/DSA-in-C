#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;               
    struct Node* next;
};

int main() {

    struct Node* top = NULL; 

    // PUSH 10
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = top;
    top = newNode;

    // PUSH 20
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = top;
    top = newNode;

    // PUSH 30
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = top;
    top = newNode;

    // DISPLAY
    struct Node* temp = top;
    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
