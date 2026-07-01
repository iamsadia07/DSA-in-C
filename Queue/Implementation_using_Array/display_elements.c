#include <stdio.h>

#define SIZE 5

int queue[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

int main() {

    // DISPLAY operation
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }

    return 0;
}
