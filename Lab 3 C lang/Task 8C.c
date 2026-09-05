#include<stdio.h>
int main() {
	char name[50];
	printf("enter your full name:");
	fgets(name,50,stdin);
	printf("Hello,\n\n%s",name);
	return 0;
	
}
