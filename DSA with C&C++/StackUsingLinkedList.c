#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next
} Node ;
void printStatement();
void push(Node **tos , int );
int pop(Node **tos);
int peek(Node *TOS);

void main(){
    Node *TOS = NULL ;
    int value,choice , exit ;

    while(1){
        printStatement();
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("\nEnter the value, you want to push...\n");
                scanf("%d",&value);
                push(&TOS, value);
                break ;
            case 2 :
                value = pop(&TOS);
                if(value != -1){
                    printf("%d is deleted \n", value);
                }else printf("\n Underflow Condition \n");
                break;
            case 3 :
                value = peek(TOS);
                if(value != -1){
                    printf("%d is in TOP at Stack \n", value);
                }else printf("\n Underflow Condition \n");
                break;
            case 0 :
                exit = 1;

            default :
                printf("\nPlease Enter the right Choice :: \n");
        }
        if(exit == 1){
            return ;
        }
    }
}

void printStatement(){
    printf("\n");
    printf("For insert\\push an item(value) , press -1\n");
    printf("for pop an item \n");
    printf("Otherwise press 0 for exit \n");
    printf("\n");
}

void push(Node **TOS , int value){
    Node *p ; 
    p = (Node *)malloc(sizeof(Node));
    p->data = value ;
    if(*TOS == NULL){
        *TOS = p ;
        return ;
    }
    p->next = *TOS ;
    *TOS = p ;
}
int peek(Node *TOS){
    if(TOS == NULL){
        printf("Stack is empty\n");
        return -1;
    }else return TOS->data ;
}

int pop(Node **TOS){
    if(*TOS == NULL){
        printf("Stack is empty \n");
        return -1 ;
    }
    Node *temp;
    temp = *TOS ;
    *TOS = (*TOS)->next ;
    int item = temp->data ;
    free(temp) ;
    return item ; 
}