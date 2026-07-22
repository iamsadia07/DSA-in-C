//1 -> 2 -> 2 -> 1

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// reverse 
struct node* reverse(struct node* head) {
    struct node* prev = NULL;
    struct node* curr = head;
    struct node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// palindrome check
int isPalindrome(struct node* head) {
    if (head == NULL || head->next == NULL)
        return 1;

    struct node* slow = head;
    struct node* fast = head;

    // middle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    
    struct node* secondHalf = reverse(slow);

    //  compare
    struct node* firstHalf = head;

    while (secondHalf != NULL) {
        if (firstHalf->data != secondHalf->data)
            return 0;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return 1;
}


struct node* create(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    
    struct node* head = create(1);
    head->next = create(2);
    head->next->next = create(2);
    head->next->next->next = create(1);

    if (isPalindrome(head))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
