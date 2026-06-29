#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

int main() {

    // Check if stack is full
    if (top == SIZE - 1) {
        printf("Stack is Full\n");
    } else {
        printf("Stack is Not Full\n");
    }

    return 0;
}
