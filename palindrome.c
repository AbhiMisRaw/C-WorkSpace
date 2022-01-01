/*Program to check a number is palindrome or not?*/
#include<stdio.h>
void main(){
	int num ,x, rev;
	scanf("%d",&num);
	x = num;
	int a;
	while(x!=0){
		a = x%10;
		rev = rev *10 + a;
		x = x/10;
	}
	if(rev == num){
		printf("The number is Palindrome Number");
	}else printf("The number is Not Palindrome Number");
}