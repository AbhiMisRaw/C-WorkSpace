#include<stdio.h>

void main(){
	struct Students{
		char name[30];
		int rollNo ;
		int age ;
		char sec ;
	};
	struct Students s1 = {"Abhishek" , 01 , 22 , 'B'};
	struct Students s2 = {"Aniket" , 15 , 22 , 'A'};
	struct Students s3 = {"Achal" , 02 , 22 , 'B'};
	FILE *f ;
	f = fopen("StudentDatabase" , "w+");
	fwrite(&s1 , sizeof(s1) , 1, f);
	fwrite(&s2 , sizeof(s2) , 1, f);
	fwrite(&s3 , sizeof(s3) , 1 , f);
	rewind(f);
	while(fread(&s1 , sizeof(s1) , 1 , f) != 0){
		printf("%s %d %d",s1.name , s1.rollNo , s1.age);
		printf("\n");
	}

}