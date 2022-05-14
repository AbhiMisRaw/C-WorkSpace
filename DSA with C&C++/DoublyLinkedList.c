#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    struct node *prev ;
    int value;
    struct node *next ;
} Node ;
void printStatement();
void insertAtBegining(Node **head , Node **tail , int);
void traversal(Node *head , Node *tail);
void main(){
    Node *head = NULL , *tail=NULL ;
    int choice , value;
    while(1){
        printStatement();
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enetr the value :\n");
                scanf("%d",&value);
                insertAtBegining(&head , &tail , value);
                break;

            case 2 :
                traversal(head , tail);
                break;

            case 3 :
                printf("\n %d is the head of this LinkedList",head->value);
        }
    }
}
void printStatement(){
    printf("\n");
    printf("Choose Operations\n\n ");
    printf("for insert at begining, press - 1\n");
    printf("for traversal, press - 2\n");
    printf("for deleting a node at begining, press 3\n");  
   // printf("for inserting a node at end, press 4\n");
   // printf("for No Operations, press - 0\n");
    printf("\n");
}
void insertAtBegining(Node **head , Node **tail , int value){
    Node *p ;
    p = (Node *)malloc(sizeof(Node));
    p->value = value;
    if(*head == NULL && *tail == NULL){
        *head = p ;
        *tail = p ;
        p->prev = NULL;
        p->next = NULL;
        return ;
    }
    p->next = *head ;
    p->prev = NULL ;               
    (*head)->prev = p;              //  linking a first node to new node bcz its a Doubly linked list. 
    *head = p ;                     
}
void traversal(Node *head , Node *tail){
    if(head == NULL){
        return;
    }
    while(head != NULL){
        printf("%d  ", head->value);
        head = head->next;
    }
}

https://g.dev/AbhiMisRaw

https://github.com/AbhiMisRaw