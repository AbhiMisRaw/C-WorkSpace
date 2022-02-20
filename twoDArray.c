#include<stdio.h>
#include<stdlib.h>


void main(){
	int *p;
	printf("Enter the row & column size :\n");
	int row , col;
	scanf("%d %d",&row , &col);

	p = (int *)malloc(row*col * sizeof(int));
	int i = 0 , j = 0 ;
	printf("Base of Address of this,Matrix is ,%p",(p+3*i));
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			scanf("%d",(p+row*i + j));
		}
	} 
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d   ", *(p+row*i + j));
		}
		printf("\n");
	}

}
