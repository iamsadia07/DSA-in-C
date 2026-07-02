#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *front = NULL, *rear = NULL;

    // ENQUEUE 10
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    // ENQUEUE 20
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    // DISPLAY Queue
    struct Node* temp = front;
    printf("Queue:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
