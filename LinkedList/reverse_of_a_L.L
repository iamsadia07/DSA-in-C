#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

int main() {

    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    
    head->data = 10;
    second->data = 20;
    third->data = 30;

    
    head->link = second;
    second->link = third;
    third->link = NULL;

    // Reverse Linked List
    struct Node *prev = NULL, *curr = head, *next = NULL;

    while (curr != NULL) {
        next = curr->link;   
        curr->link = prev;   // reverse link
        prev = curr;         
        curr = next;         
    }

    head = prev; // new head

    //  reversed list
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
   printf("NULL");
    

    return 0;
}
