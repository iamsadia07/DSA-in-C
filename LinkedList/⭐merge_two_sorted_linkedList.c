//USING FUNCTIONS

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Merge 
struct Node* sortedMerge(struct Node* first, struct Node* second) {

    struct Node* head = NULL;
    struct Node* tail = NULL;

   
    while (first != NULL && second != NULL) {

        struct Node* temp;

        if (first->data <= second->data) {
            temp = first;
            first = first->next;
        } else {
            temp = second;
            second = second->next;
        }

        
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    // Remaining nodes COPY
    if (first != NULL)
        tail->next = first;
    else
        tail->next = second;

    return head;
}

// Display 
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {

                                       //  1 -> 3 -> 5
    struct Node* head1 = createNode(1);
    head1->next = createNode(3);
    head1->next->next = createNode(5);

                                           //  2 -> 4 -> 6
    struct Node* head2 = createNode(2);
    head2->next = createNode(4);
    head2->next->next = createNode(6);

    // Merge
    struct Node* result = sortedMerge(head1, head2);

    printf("Merged List: ");
    display(result);

    return 0;
}
