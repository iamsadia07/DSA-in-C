#include<stdio.h>
#include<stdlib.h>

struct Node {

     int data;
     struct Node *next;

};

int main(){

    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node*)malloc(sizeof(struct Node));


    //connection b/w Nodes
    head ->next = second;
    second ->next = third;
    third ->next = fourth;
    fourth ->next = fifth;
    fifth ->next = NULL;

    
    int count =0;
    //count
    while (head != NULL)
    {
       count ++;
       head = head ->next;
    }
 printf("%d", count);
}
