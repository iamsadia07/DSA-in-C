#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

int main() {
struct Node *head = (struct Node *)malloc(sizeof(struct Node));
struct Node *second = (struct Node *)malloc(sizeof(struct Node));
struct Node *third = (struct Node *)malloc(sizeof(struct Node)); 

//Assign value
head -> data = 10;
second -> data = 20;
third -> data = 30;

head ->link = second;
second -> link = third;
third -> link = NULL;

//Empty LL
if (head == NULL) {
    printf("List is empty");
    return 0;
}

struct Node *ptr;
ptr = head;

// Delete Node from begin..

head = head -> link;
free(ptr);


ptr = head;

while(ptr!= NULL) {
    printf("%d ->", ptr -> data);
    ptr= ptr ->link;

}

    printf("NULL");

}
