#include<stdio.h>
int main() {
	int ticket ,n=0 ,rev = 0; 
	printf("enter your ticket number :");
	scanf("%d",&ticket);
	while(ticket>0){
		n=ticket%10;
		rev=rev*10+n;
		ticket=ticket/10;
	}
	printf("REVERSED=%d\n",rev);

	   return 0;
}
