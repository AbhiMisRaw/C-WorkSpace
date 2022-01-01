/*Print Daigonal Matrix*/
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
	printf("Matrix : \n");
	for(i = 0; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Daigonal MAtrix is : \n");
	for(i = 0; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			if(i == j){
				printf("%d \t",arr[i][j]);
			}
		}
	}
	

}