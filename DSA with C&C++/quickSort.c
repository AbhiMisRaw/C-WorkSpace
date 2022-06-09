#include<stdio.h>


void quickSort(int arr[] , int , int);
void swap(int arr[] , int , int);
int partition(int arr[] , int , int);
void main(){
    int arr[] = {10,4,19,15,13,20,6,39,1,26,21,97,32};
    int len = 13 ;
    int i = 0 ;
    for(i = 0 ; i <  len ; i++){
        printf("%d, ", arr[i]);
    }
    quickSort(arr , 0 , len);
    printf("\n After Sorting \n");
    
    for(i = 0 ; i <  len ; i++){
        printf("%d, ", arr[i]);
    }
}
void quickSort(int arr[] , int s, int l){
    if(s < l){
        int j ;
        j = partition(arr , s , l);
        quickSort(arr , s , j);    
        quickSort(arr , j+1 , l);
    }
}
int partition(int arr[] , int l , int h){
    int pivot = arr[l];
    int i = l;
     int j = h ;
     while( i < j){
         do {
             i++ ;
         }while(arr[i] <=  pivot) ;
         do {
             j--;
         }while(arr[j] > pivot);
         if(i < j){
             swap(arr , i , j);
         }
     } 
     swap(arr , l , j);
     return j;
} 
void swap(int arr[] , int i , int j){
    int temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp ;
 }