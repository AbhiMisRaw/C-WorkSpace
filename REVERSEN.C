#include<stdio.h>
#include<conio.h>
void main(){
int n ;
int rem , q;
int rev = 0;
scanf("%d",&n);
while(n>=9){
rem = n%10;
q= n/10;
n = q;
rev = rev *10;
rev= rev + rem;
//printf("%d",q);
}
rev = rev *10;
rev = rev + n;
printf("%d",rev);
getch();
clrscr();
}