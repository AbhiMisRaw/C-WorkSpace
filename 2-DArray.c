/* in this program just a 2d array is initialized and showing the element of the Array:*/
#include<stdio.h>
void main(){
	int row,col;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	printf("Enter the element of an 2-DArray:\n");
	int i , j;
	for(i = 0 ; i <row ; i++){
		for(j = 0 ; j < col ; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0 ; i <row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("arr[%d][%d] = %d \t",i,j,arr[i][j]);
		}
		printf("\n");
	}
}