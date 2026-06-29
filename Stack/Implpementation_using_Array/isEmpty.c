#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

int main() {

    // Check if stack is empty
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack is Not Empty\n");
    }

    return 0;
}
