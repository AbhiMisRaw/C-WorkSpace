/*Program to print Transpose of the Given Matrix:*/
#include<stdio.h>
void main(){
	printf("Enter the length of the array:\n");
	int row,col;
	scanf("%d%d",&row,&col);
	int arr[row][col];
	int i,j;
	printf("Enter the element of the array:");
	for(i = 0; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix before Transpose:");
	for(i = 0; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Matrix After Transpose:-->");
	for(i = 0; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}


}