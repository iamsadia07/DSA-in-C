#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

int main() {

    int n ;  // No. of elements
    int value;
           printf("Enter no. of elements");
                 scanf("%d", &n);


    for (int i = 0; i < n; i++) {

        printf("Enter value: ");
        scanf("%d", &value);

        if (rear == SIZE - 1) {
            printf("Queue Overflow\n");
            return 0;

        } else {
            if (front == -1)
                front = 0;
                rear +=1;
            queue[rear] = value;
        }
    }

    // DISPLAY
    printf("Queue elements:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
