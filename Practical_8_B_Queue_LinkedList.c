#include <stdio.h>
#include <stdlib.h>

// Define Node structure
struct Node {
    int data;
    struct Node* next;
};

// Define front and rear pointers
struct Node* front = NULL;
struct Node* rear = NULL;

// Function to add an element to the queue (Enqueue)
void enqueue(int value) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;
    if (rear == NULL) {
        front = rear = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }
    printf("%d added to the queue.\n", value);
}

// Function to remove an element from the queue (Dequeue)
void dequeue() {
    if (front == NULL) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        struct Node* temp = front;
        printf("%d removed from the queue.\n", front->data);
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        free(temp);
    }
}

// Function to print the queue
void print_queue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
    } else {
        struct Node* temp = front;
        printf("Queue contents: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
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
