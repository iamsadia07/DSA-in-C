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


int areIdentical(struct Node* head1, struct Node* head2) {

    while (head1 != NULL && head2 != NULL) {

        if (head1->data != head2->data)
            return 0;  // Not identical

        head1 = head1->next;
        head2 = head2->next;
    }

    
    if (head1 == NULL && head2 == NULL)
        return 1;  // Identical
    else
        return 0;  // Not identical
}


void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {

    
    struct Node* head1 = createNode(1);                   //  1 -> 2 -> 3
    head1->next = createNode(2);                          
    head1->next->next = createNode(3);

   
    struct Node* head2 = createNode(1);                      //  1 -> 2 -> 3
    head2->next = createNode(2);
    head2->next->next = createNode(3);

   
    if (areIdentical(head1, head2))
        printf("Lists are Identical\n");
    else
        printf("Lists are NOT Identical\n");

    return 0;
}
