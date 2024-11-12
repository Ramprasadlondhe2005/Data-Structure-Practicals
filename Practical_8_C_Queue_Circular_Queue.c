#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Size of the circular queue

int queue[MAX];
int front = -1, rear = -1;

// Check if the queue is full
int is_full() {
    return (rear + 1) % MAX == front;
}

// Check if the queue is empty
int is_empty() {
    return front == -1;
}

// Enqueue operation to add an element
void enqueue(int value) {
    if (is_full()) {
        printf("Queue is full.\n");
    } else {
        if (front == -1) front = 0;  // First element
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("%d added to the queue.\n", value);
    }
}

// Dequeue operation to remove an element
void dequeue() {
    if (is_empty()) {
        printf("Queue is empty.\n");
    } else {
        printf("%d removed from the queue.\n", queue[front]);
        if (front == rear) {
            front = rear = -1;  // Queue is now empty
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Print the elements of the queue
void print_queue() {
    if (is_empty()) {
        printf("Queue is empty.\n");
    } else {
        int i = front;
        printf("Queue contents: ");
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]);  // Print last element
    }
}

int main() {
    int choice, value;
    
    while (1) {
        // Display menu to the user
        printf("\n1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                print_queue();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
