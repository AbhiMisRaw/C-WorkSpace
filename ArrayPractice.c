#include<stdio.h>
void main(){
	//printf("Hello World!");
	int len;
	scanf("%d",&len);
	int ar[len];
	int i;
	for(i =0 ; i<len;i++){
		scanf("%d",&ar[i]);
	}
	for(i =0 ; i<len;i++){
		printf("ar[%d] = %d \n",i,ar[i]);
	}
}