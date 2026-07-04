#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    // Create queue: 10 -> 20 -> 30
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;

    struct Node* front = n1;

    // DISPLAY
    if (front == NULL) {
        printf("Queue is Empty\n");
    } else {
        struct Node* temp = front;

        printf("Queue elements:\n");

        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }

    return 0;
}
