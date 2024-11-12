#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to check if the queue is empty
int is_empty() {
    return front == -1;
}

// Function to check if the queue is full
int is_full() {
    return rear == MAX - 1;
}

// Function to add an element to the queue
void enqueue(int value) {
    if (is_full()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (is_empty()) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d added to the queue.\n", value);
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (is_empty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        printf("%d removed from the queue.\n", queue[front]);
        if (front == rear) {  // Queue is now empty
            front = rear = -1;
        } else {
            front++;
        }
    }
}

// Function to print the queue
void print_queue() {
    if (is_empty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue contents: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        // Menu displayed in one printf statement
        printf("Menu:\n1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
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
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
