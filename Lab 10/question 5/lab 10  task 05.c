#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	fptr = fopen("student_record.txt", "r"); 
	if(fptr == NULL){
    printf("Error: File Not Found!");
    exit(1);
      }
      while(fscanf(fptr, "%d %s %d", &roll_no, name, &marks) == 3){
      printf("%d\t%s\t%d\t",roll_no,name,marks);
      printf("\n");     
       }
	int roll_no,marks;
	char name[50];
	
    fptr = fopen("student_record.txt", "a");
    fclose(fptr);
       return 0;
}
