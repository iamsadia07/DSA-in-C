#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node* next;
};

int main() {

    // Create list: 10 -> 20 -> 30
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    // Deletion from end
    if (head == NULL) {
        printf("List is empty");
        return 0;
    }

    // If only one node
    if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {

        struct Node* temp = head;

        // Traverse to second last node
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        // Delete last node
        free(temp->next);
        temp->next = NULL;
    }

    // Print updated list
    struct Node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");

    return 0;
}
