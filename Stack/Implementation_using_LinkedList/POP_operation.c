#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node* top = NULL;

    // Create stack: 30 -> 20 -> 10
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n3->next = n2;
    n2->next = n1;
    n1->next = NULL;

    top = n3;

    // POP operation
    if (top == NULL) {
        printf("Stack is Empty\n");
    } else {
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }

    // DISPLAY after pop
    struct Node* ptr = top;
    printf("Stack after pop:\n");
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
