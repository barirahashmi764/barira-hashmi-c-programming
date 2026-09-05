#include<stdio.h>
#include<conio.h>
int main () {
	char strname[50];
	int age;
	char strcity[50];
	
	printf("enter your name:\n");
	fgets(strname , 50 , stdin);
	
	printf("enter your age:\n");
	scanf("%d",&age);
	getchar();
	
	printf("enter your city:\n");
	fgets(strcity , 50 , stdin);
	
	printf("\n");
	printf("Name: %s",strname);
	printf("Age: %d\n",age);
	printf("City: %s\n",strcity);
	return 0;
}
