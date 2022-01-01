
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the Length of Row & Column:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	int i ,j;
	for(i = 0 ; i < row ; i++){
		for(j = 0;j<col ; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter the element of 2nd array :\n");
	int ar2[row][col];
	for(i = 0 ; i < row ; i++){
		for(j = 0;j<col ; j++){
			scanf("%d",&ar2[i][j]);
		}
	}
	int new[row][col];
	for(i = 0 ; i < row ; i++){
		for(j = 0;j<col ; j++){
			new[i][j] = arr[i][j] + ar2[i][j];
		}
	}
	printf("After Addition of the array,New Array is --> \n");
	for(i = 0 ; i < row ; i++){
		for(j = 0;j<col ; j++){
			printf("%d\t",new[i][j]);
		}
		printf("\n");
	}
}