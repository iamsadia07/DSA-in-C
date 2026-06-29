#include<stdio.h>

#define SIZE 6

int Stack[SIZE] = {10, 20, 30, 40, 50};
  int top = 4, i;

 int main() {
    if(top == -1) 
        printf("Stack is Empty");
    else {
        printf("\nStack Elements");
          for(i=top; i>=0; i--) {
                printf("%d\n", Stack[i]);
          }
    }
    return 0;
 }
