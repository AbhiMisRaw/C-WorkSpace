/*
This file is compiled by Abhishek Mishra
in this program covers some basic but important operation performs in array .
In case of any error please dong forget to ping me, this gives the oppertunity
to debug the code and making our knowledge ROBUST ... See you :)
*/


#include<stdio.h>
void add(int arr[] ,int);
void insert(int arr[] , int  ,int);
void traverse(int arr[]);
int search(int arrr[] );
void selectionSort(int arr[]);
void swap(int arr[] , int ,int);
int findMinNumber(int arr[] , int ,int );

int len = 0;
void main(){
    int item , loc , res;
    int arr[100];
    
    int exit = 0,op;
    while(1){
        printf("\n \nEnter Your choice for performing some operation:\n");
        printf("1 for Add an Element:\n");
        printf("2 for inserting an Element at Specific Location: \n");
        printf("3 for Printing all element(Traversal): \n");
        printf("4 for Searching an Element in array: \n");
        printf("5 for Sorting the Array: \n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
                printf("Enter the element you want to add in the array:\n");
                scanf("%d",&item);
                add(arr , item );
                break;
        case 2:
                printf("Enter the element and location you want to add in the array:\n");
                scanf("%d %d",&item , &loc);
                insert(arr , item , loc);
                break;
        case 3:
                traverse(arr);
                break;
        case 4:
            res = search(arr);
            if(res == -1){
                printf("Value doesn't exist\n");
            }else {
                printf("Value found at : %d",res);
            }
            break;

        case 5:
            selectionSort(arr);
            break;
        default:
        exit= 1;
        break;
        }
        if(exit==1){
            printf("\nAll Operations are Done\n Now, Array is :");
            traverse(arr);
            break;
        }
    }
}
void add(int arr[], int item ){
    arr[len] =item;
    len++; 
}
// inserting at specific location 
void insert(int arr[], int item  , int loc ){
    int i;
    if(loc < 0 && loc > len){
        printf("Can't insert this position ,try Again:");
        return;
    }
    len++; 
    for(i = len ; i>=loc ; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = item;
}   // 10 (15-2) 20 30 40 50 

// traversing at specific location
void traverse(int arr[]){
    int i;
    for(i = 0 ; i < len ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int search(int arr[] ){
    printf("Enetr the element you eant to search:\n");
    int i,val;
    scanf("%d",&val);
    for(i = 0 ; i < len ; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

void selectionSort(int arr[] ){
    int i , j ;
    for(i = 0 ; i < len ;i++ ){
        int ind = findMinNumber(arr , i , len );
        swap(arr , i , ind);
    }
}
int findMinNumber(int arr[] , int start , int end ){
    int i,min = start ;
    for(i = start ; i < end ; i++){
        if(arr[min] > arr[i]){
            min = i ;
        }
    }
    return min ;
}
void swap(int arr[] , int i , int j){
    int temp = arr[i] ;
    arr[i] = arr[j] ;
    arr[j] = temp ;
}