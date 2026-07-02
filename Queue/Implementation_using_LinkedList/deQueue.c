#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    //  queue: 10 -> 20
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = NULL;

    struct Node* front = n1;
    struct Node* rear = n2;

    // DEQUEUE
    if (front == NULL) {
        printf("Queue Underflow\n");
    } else {
        struct Node* temp = front;

        printf("Deleted element: %d\n", front->data);

        front = front->next;   
        free(temp);           
    }

   
    if (front == NULL) {
        rear = NULL;
    }

    // DISPLAY
    struct Node* ptr = front;
    printf("Queue after deletion:\n");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
