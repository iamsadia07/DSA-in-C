/* 10 -> 20 -> 30 -> 40 -> 50 -> 60
          ↑                       ↓
           ← ← ← ← ← ← ← ← ← ← ← ←        */

##include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Create Node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int detectLoop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

   if (slow == fast)
        {
            return 1; // Loop Found
        }
    }

    return 0; // No Loop
}

int main()
{
    struct Node *head;

    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);
    head->next->next->next->next->next = head->next;
    // 50 -> 20

    if (detectLoop(head))
        printf("Loop Found");
    else
        printf("Loop Not Found");

    return 0;
}
