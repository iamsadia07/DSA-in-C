#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node* top = NULL;

    // CASE 1: Initially Empty
    if (top == NULL) {
        printf("Stack is Empty (Initially)\n");
    }

    // PUSH operation
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = top;
    top = newNode;
    // CASE 2: After Push (Not Empty)
    if (top == NULL) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack is Not Empty (After Push)\n");
    }

    return 0;
}
