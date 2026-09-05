#include<stdio.h>
int main() {
	int age ;
	float height;
	char grade;
	
	printf("enter your age :");
	scanf("%d",&age);
	
	printf("enter your height :");
	scanf("%f",&height);
	
	printf("enter your grade :");
	scanf(" %c",&grade);
	
	 printf("\n");
	 printf("Age : %d \n ",age);
	 printf("Height : %.2f \n",height);
	 printf("Grade : %c \n",grade);
	 return 0 ;
	
}
