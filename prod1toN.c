#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    scanf("%d",&n);
    int prod = 1;
    for(int i = 1 ; i <= n ; i++){
        prod = prod*i;
    }
    printf("%d",prod);
}