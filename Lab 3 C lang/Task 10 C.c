#include <stdio.h>
int main() {
	int age ;
	char name [50] , grade ;
	float height , CGPA ;
	
	printf("enter your name:");
	fgets(name, 50, stdin);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your height:");
	scanf("%f",&height);
	printf("enter your grade:");
	scanf(" %c",&grade);
	printf("enter your CGPA:");
	scanf("%f",&CGPA);
	
	printf("==========STUDENT REPORT==========\n\n\n");
	printf("Name:\t%s",name);
	printf("\n\nAge:\t%d",age);
	printf("\n\nHeight:\t%.2f",height);
	printf("\n\nGrade:\t %c",grade);
	printf("\n\nCGPA:\t%.2f",CGPA);
}
