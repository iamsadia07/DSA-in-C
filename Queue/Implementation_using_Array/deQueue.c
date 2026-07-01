#include <stdio.h>

#define SIZE 5

int queue[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

int main() {

    // DEQUEUE
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }

    // DISPLAY after dequeue
    printf("Queue after deletion:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
