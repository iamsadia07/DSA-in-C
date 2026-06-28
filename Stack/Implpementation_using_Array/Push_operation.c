#include <stdio.h>

#define SIZE 3

int stack[SIZE];
int top = -1;

int main() {

    // PUSH element 10
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = 10;
        printf(" %d\n", stack[top]);
    }

    // PUSH element 20
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = 20;
        printf(" %d\n", stack[top]);
    }
// PUSH element 30
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = 30;
        printf(" %d\n", stack[top]);
    }

  // PUSH element 40
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = 30;
        printf(" %d\n", stack[top]);
    }
    

    return 0;              /* 10  20  30  
                          Stack Overflow */
}
