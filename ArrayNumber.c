/*print how much time an element is shown in 2D-Array*/
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the Array Length:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	int i ,j;
	for(i = 0 ; i < row ; i++){
		for(j = 0;j<col ; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int num,count = 0;
	for(i = 0 ; i < row ; i++){
		for(j = 0;j<col ; j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Enter the number You want to search :");
	scanf("%d",&num);
	for(i = 0 ; i < row; i++){
		for(j = 0 ; j < col ; j++){
			if(arr[i][j] == num){
				count++;
			}
		}
	}
	printf("\n %d is shown in this array %d time:",num,count);
}