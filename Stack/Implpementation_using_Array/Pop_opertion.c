      #include <stdio.h>

#define SIZE 5

int stack[SIZE] = {10, 20, 30};
int top = 2;  // already 3 elements present

int main() {
    
    // POP operation
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }

    
    printf("Stack after pop:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    return 0;
}
