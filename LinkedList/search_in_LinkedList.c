#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;

struct Node *newNode(int data){
    struct Node* newNode = (struct Nde *)malloc(sizeof(struct Node);
    newNode -> data = data;
    newNode -> next = NULL;
return newNode;

}

int main() {
 struct Node *head = NULL;

    head = newNode(10);
    head -> next = newNode(20);
    head -> next -> next = newNode(30);


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
