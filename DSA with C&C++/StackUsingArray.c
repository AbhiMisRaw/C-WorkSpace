#include<stdio.h>
#define SIZE 100 

void printStatement();
void push();
int overFlow( int);
int underFlow(int);
void push(int stack[] , int , int *);
int pop(int st[] , int *);
int peek(int st[] , int );
int main(){
    int choice , item ;
    int STACK[100] , TOS = -1;
    while(1){
        printStatement();
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                if(overFlow(TOS)){
                    printf("Stack is in OverFlow condition\n");
                }else{
                    printf("Enter the element, you want to store in Stack\n");
                    scanf("%d",&item);
                    push(STACK , item , &TOS);
                    
                }
                break;

            case 2 :
                if(underFlow(TOS)){
                    printf("Stack is in UnderFlow condition\n");
                }else{
                    item = pop(STACK , &TOS);
                    printf("\n %d item is deleted from stack \n",item);
                }
                break;
            
            case 3 :
                if(underFlow(TOS)){
                    printf("Stack is in UnderFlow condition\n");
                }else{
                    item = peek(STACK , TOS);
                    printf("\n %d item is Top of stack \n",item);
                }
                break;

            default :
                return 0;
            
        }
    }
    return 0;
}
void printStatement(){
    printf("\n");
    printf("Choose the Operation and press keys for a oarticular \n");
    printf("for insertion, press :1 \n");
    printf("for deletion, press :1 \n");
    printf("for looking at the top, press :3 \n");
    printf("/n for no operation press 0\n");
}

int overFlow(int TOS){
    if(TOS == SIZE -1){
        return 1;
    }
    return 0;
}

int underFlow(int TOS){
    if(TOS ==  -1){
        return 1;
    }
    return 0;
}

void push(int st[] , int item , int *tos){
    *tos = *tos + 1;
    st[*tos] = item;
}

int pop(int st[] , int *tos){
    int item ;
    item = st[*tos];
    st[*tos] = 0 ;
    *tos = *tos -1 ;
    return item ;
}

int peek(int stack[] , int tos){
    return stack[tos] ;
}