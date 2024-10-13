#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;
    struct node * next;
};
int top = -1;
struct node * temp = NULL;


void push(struct node ** head){
    
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to PUSH the  NODE : \n");
scanf("%d",&newnode -> data);
newnode -> next = NULL;

if(*head == NULL){
    *head = newnode;
}
else{
    temp -> next = newnode;
}

temp = newnode;
top++;
printf("\nThe %d node is PUSHED!.",newnode -> data);
}

void pop(struct node * head){
     if(top == -1){
        printf("Underflow!");
        return;
    }
   if(head -> next == NULL){
       struct node * temp = head;
       printf("\nThe %d node is POPED!",temp -> data);
       free(temp);
       top-- ;
   }
   else {
         struct node * SecondLast = head;
     struct node * Last = head -> next;
   
    
       while(Last->next != NULL) {
           SecondLast = Last;
           Last = SecondLast -> next;
         
       }
         printf("\nThe %d node is POPED!",Last -> data);
         SecondLast -> next = NULL;
         free(Last);
           top--;
         
   }
}

void display(struct node ** head){
        if(*head == NULL){
            printf("Stack is empty");
        }else{
            struct node * temp = *head;
        printf("\nPrinting STACK..... \n");
         while(temp != NULL) {
         printf("%d -> ",temp -> data);
         temp =temp -> next;
       }
       printf("NULL");
        }
}

int main() {
char ch;
struct node * head = NULL;

do{
    int choice;
    printf("\nenter a choice : 1. Push, 2. Pop, 3. Display : ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1 : push(&head);
        break;
        case 2 : pop(head);
        break;
        case 3 : display(&head);
        break;
        default : printf("\nChoice not available.");
                break;
    }
    
    printf("\nEnter 'Y' if you want to continue : ");
    scanf("%s",&ch);
}while(ch == 'y'|| ch == 'Y');


    return 0;
}