#include <stdio.h>

void main(){
    int disks ;
    char src , temp ,des , helper ;
    void TOH(int , char , char , char );
    printf("enter number of diks between 1 to 10 ");
    scanf("%d" , &disks);
    fflush(stdin);
    printf("enter the source tower , destination tower and helper tower (space seprated): \n ");
    printf("%c %c %c %c" , &temp , &src , &des , &helper); 
    TOH(disks , src ,  des , helper);
}
void TOH(int n , char src , char des , char helper){
    if(n == 1){
        printf("\nmove disks from %c to %c \n " , src , des);

    }else{
        TOH(n-1 , src , helper , des);
        printf("\nmove disks from %c to %c \n " , src , des);
        TOH(n-1 , helper , des , src);
    }
}