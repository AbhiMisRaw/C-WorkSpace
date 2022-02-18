#include<stdio.h>
#include<tgmath.h>

int binarytoDecimal(int);
void main(){
	int res,num;
	printf("Enter any Binary Number : ");
	scanf("%d",&num);
	res = binarytoDecimal(num);
	printf("Decimal of that number is : %d",res );

}
int binarytoDecimal(int val){
	int ans ,count = 0, i;
	while(val != 0){
		i = val % 10;
		if(i == 1){
			ans += pow(2 , count);
			count++;
		}else{
			count++;
		}
		val = val/10;
	}
	return ans;
}