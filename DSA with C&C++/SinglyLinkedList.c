#include<stdio.h>
#include<stdlib.h>

void printChoice(void);

typedef struct node{
    int item;
    struct node *next;
} Node ;

void insertAtBegining(Node **head , int item);
void traversal(Node *head);
void insertAtEnd(Node **head , int item);
void deletionAtBegining(Node **head);

void main(){
    Node *head = NULL;
    int choice ,item;
    while(1){
        printChoice();
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                printf("Enter the value to add \n");
                scanf("%d",&item);
                insertAtBegining(&head , item);
                break;
            case 2 :
                traversal(head);
                break;

            case 3 :
                deletionAtBegining(&head);
                break;
            case 4 :
                printf("Enter the value to add \n");
                scanf("%d",&item);
                insertAtEnd(&head , item);
                break;
            case 0 :
                exit(0);
        }
    }    
}
void printChoice(){
    printf("\n");
    printf("Choose Operations(this operation will be start at Begining)\n\n ");
    printf("for insert at begining, press - 1\n");
    printf("for traversal, press - 2\n");
    printf("for deleting a node at begining, press 3\n");
    printf("Choose Operations(this operation will be start at End)\n\n ");
    printf("for inserting a node at end, press 4\n");
    printf("for No Operations, press - 0\n");
    printf("\n");
}

void insertAtBegining(Node **head , int item){
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->item = item;
    //p->next = NULL ;
    if(*head == NULL){
        *head = p;
        (*head)->next = NULL;
        return ;
    }
    p->next = *head ;
    *head = p;
}

void traversal(Node *head){
    while(head != NULL){
        printf("%d ", head->item );
        head = head->next ;
    }
}
void deletionAtBegining(Node **head){
    Node *p ;
    if(*head == NULL){
        printf("Nothing to delete");
        return ;
    }
    if((*head)->next == NULL){
        p = *head ;
        *head = NULL ;
        free(p);
        return ;
    }
    p = *head ;
    *head = (*head)->next ;
}

/*
void insertAtEnd(Node **head , int value){
    Node *p ;
    p = (Node *)malloc(sizeof(Node));
    p->item = value ;
    if(*head == NULL){
        *head = p ;
        p->next = NULL ;
        return ;
    }
    Node *temp = head ;
    while( temp != NULL){
        *temp = temp->next; 
    }
    temp = p ;
    p->next = NULL;
}
*/


// void insertAtEnd(Node **head , int item){
//     Node *p ;
//     p = (Node *)malloc(sizeof(Node));
//     p->item = item ;
//     if(*head == NULL){
//         *head = p;
//         (*head)->next =NULL;
//         return ;
//     }
//     // Node *temp ;
//     // temp = *head ;
//     while(head != NULL){
//         *head = (*head)->next;
//     }
//     *head = p;
//     p->next = NULL;
// }