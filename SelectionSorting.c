#include<stdio.h>
void selectionSort(int arr[] , int);
int findMax(int arr[] ,  int);	
void swap(int arr[] , int ,int);
void main(){
	
	int len;
	printf("Enter the Length :");
	scanf("%d",&len);
	int arr[len];
	int i ;
	for(i = 0 ; i < len;i++){
		scanf("%d",&arr[i]);
	}
	selectionSort(arr , len);
	printf("After Sorting Array's elemenyts are : \n");
	for(i = 0 ; i < len;i++){
		printf("%d  ",arr[i]);
	}

}
void selectionSort(int arr[] ,int len){
	
	int i , j;
	j = len-1;
	for( i = 0 ; i < len ; i++){
		int lastLoc = j-i;
		int max = findMax(arr , lastLoc);
		swap(arr , max ,  lastLoc);
	}
}
int findMax(int arr[] , int last){
	int max = 0;
	int i;
	for(i = 0 ; i <= last ; i++){
		if(arr[max] < arr[i]){
			max = i;
		}
	}
	return max;
}
void swap(int arr[] , int f ,int l){
	int temp = arr[f];
	arr[f] = arr[l];
	arr[l] = temp;
}