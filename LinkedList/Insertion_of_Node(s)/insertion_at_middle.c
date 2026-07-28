//10 -> 20 -> 30 -> NULL
// 10 -> 20 -> 25 -> 30 -> NULL     key = 25


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;

};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode-> data = data;
    newNode ->next = NULL;
    return newNode;

}
struct Node* insert_middle(struct Node* head, int key) {
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode ->data = key;

    if(head == NULL)
       return newNode;


    struct Node* slow = head;
    struct Node* fast = head;
    while(fast != NULL && fast ->next != NULL){
    
    slow = slow->next;
    fast = fast ->next ->next;
   }
      newNode ->next = slow -> next;
      slow -> next = newNode;
      return head;
}


int main() {
    struct Node* head = NULL;
    head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    int key = 25;

   head = insert_middle(head, key);

   struct Node* ptr = head;
   while (ptr != NULL)
   {
    printf("%d ->", ptr ->data);
    ptr = ptr -> next;

   }
   printf("NULL");
   
}
