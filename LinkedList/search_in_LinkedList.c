#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;

};

int main() {
 struct Node *head = (struct Node*)malloc(sizeof(struct Node));
 struct Node *second = (struct Node*)malloc(sizeof(struct Node)); 
struct Node * third = (struct Node*)malloc(sizeof(struct Node));

//Assign values

head ->data = 10;
second ->data = 20;
third ->data = 30;

int key = 20;

//Connection between Nodes

head ->next = second;
second ->next = third;
third ->next = NULL;


struct Node *ptr;
ptr = head;            // point to very first Node


while(ptr!=NULL) {

    if(ptr ->data == key) {

        printf("FOUND");
        break;
    }
    

   ptr = ptr -> next;
}
 
return 0;


}
