/* 10 -> 20 -> 30 -> 40 -> 50 -> 60
          ↑                       ↓
           ← ← ← ← ← ← ← ← ← ← ← ←        */


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    // Create nodes
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n5 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n6 = (struct Node*)malloc(sizeof(struct Node));

    // Assign data
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    n5->data = 50;
    n6->data = 60;

    // Connect normally
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    //  loop: 60 -> 20
    n6->next = n2;

    // Floyd Cycle Detection
    struct Node *slow = n1, *fast = n1;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            printf("Loop detected");
            return 0;
        }
    }

    printf("No loop");

    return 0;
}
