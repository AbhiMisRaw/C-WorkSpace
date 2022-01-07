/* this program tells the number of words in the
input String */
#include<stdio.h>
#include<string.h>
#define MAX 100
void main(){
	char str[MAX];
    fgets(str, MAX, stdin);
    printf("string is: %s\n", str);
    const char space[2] = " ";
    int count = 0 ;
    char *token = strtok(str,space);
    while(token != NULL){
    	printf("%s\n",token);
    	count++;
    	token = strtok(NULL,space);
    }
    printf("%d Words are present in the input String: %s",count,str);

}  