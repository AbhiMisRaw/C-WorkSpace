#include<stdio.h>
#define SIZE 5

void printStatement();
void enqueue(int q[] , int* , int* , int);

void main(){
    int q[5] ;
    int f , r , item , choice ;
    f = r = -1 ;
    while(1){
        printStatement();
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                if(f == 0 && r == SIZE-1){
                    printf("\n Overflow Condition ");
                }else{
                    printf("Enter the number \n");
                    scanf("%d",&item);
                    enqueue(q , &f ,&r , item);
                }
                break;
            case 2 :
                if(f == -1){
                    printf("Underflow Condition");
                }
                else{
                    item = dequeue(q , &f , &r );
                    printf("%d is deleted.", item);
                }
                break ;

            case 0: 
                exit(0);
            default :
                continue;
        }
    }
}

void printStatement(){
    printf("\n");
    printf("Choose the Operation and press keys for a oarticular \n");
    printf("for insert an item in Queue, press :1 \n");
    printf("for delete an item in Queue , press :1 \n");
    printf("/n for no operation press 0\n");
}
void enqueue(int arr[] , int *f , int *r , int item){
    int i;
    if(*f == -1 && *r == -1){
        *f = *f +1 ;
        *r = *r +1 ;
        arr[*r] = item ;
        return ;
    }if(*f != 0 && *r == SIZE-1){
        for(i = *f ; i <= *r ; i++){
            arr[i - *f ] = arr[i];
        }
        *r = *r - *f +1 ;
        *f = 0 ;
        arr[*r] = item ;
        return ;
    }
    *r  = *r +1 ;
    arr[*r] = item ;
}

int dequeue(int arr[] , int *f , int *r ){
    int item ;
    if(*f == *r){
        item = arr[*f] ;
        arr[*f] = 0;
        *f = *r = -1 ;
        return item;
    }
    item = arr[*f] ;
    arr[*f] = 0 ;
    *f = *f +1;
    return item;
 
}