#include <stdio.h>
#include <stdlib.h>
//LINKED_LIST
//head --> node[data, next node address ]
//head  and next node address are pointers 
typedef struct node{
    int data; 
    struct node *next;
}node;

void append(node **head , int data){
    node *current = *head; //led it the pointer we use to reach to the last node before adding new one
    node *temp = (node *)malloc(sizeof(node)); //led it the pointer of the  node we want to add
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    temp -> data = data; 
    temp -> next = NULL;
    
    //moving through the linked list until reaching to the last node
    if (*head == NULL) {
        *head = temp;
    }else{
        while(current -> next != NULL){
            current = current -> next; 
        }
        current -> next = temp;  //if current -> next = NULL , it means it reached to the last node, so update its (next) part with the address of temp
    }
}

//deleting first node
void delete(node **head){
    if(*head == NULL)
        printf("the list is empty!");
    
    else{ 
        node *temp = *head; 
        (*head)= (*head) -> next; //tranfer head to the next node
        free(temp); 
    }

}

//printing the list
void printing(node *head){
    if(head == NULL)
        printf("the linked list is empty!");

    node *ptr = head;
    while(ptr != NULL){
        printf("%d " , ptr -> data);
        ptr = ptr -> next;
    }
}
int main() {
    int data;
    char choice;
    node *head = NULL; //pointer of first node

    while(1){
        printf("Enter '+' for adding node , '-' for deleting node , 'p' for printing data , 'x' for stop : ");
        scanf(" %c" , &choice);
        switch (choice)
        {
        case '+':
            printf("Enter the data of the node to add : ");
            scanf("%d" , &data);
            append(&head , data);
            break;
        case '-':
            delete(&head);
            printf("\n");
            break;
        case 'p':
            printf("the linked list : ");
            printing(head);
            printf("\n");
            break;
        case 'x':
            printf("stop");
            exit(0);
        default:
            printf("invalid");
            break;
        }

    }
    
}