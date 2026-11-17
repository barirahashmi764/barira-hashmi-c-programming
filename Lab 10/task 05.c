#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	fptr = fopen("student_record.txt", "r"); 
	if(fptr == NULL){
    printf("Error: File Not Found!");
    exit(1);
      }
	int roll_no,marks;
	char name[50];
	while(fscanf(fptr, "%d %s %d", &roll_no, name, &marks) == 3){
      printf("%d\t%s\t%d\t",roll_no,name,marks);
      printf("\n");     
       }
    fptr = fopen("student_record.txt", "a");
    printf("enter your roll no. : \n");
	scanf("%d",&roll_no);
	getchar();  
	printf("enter your name :\n");
	fgets(name,50,stdin);
	printf("enter your marks :\n");
	scanf("%d",&marks);
	
		
       fclose(fptr);
}
