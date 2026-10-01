#include<stdio.h>
int main(){
	int code,n,rev=0,i;
	printf("Enter library book code :");
	scanf("%d",&code);
	i=code;
     while(i>0){
		n=i%10;
		rev=rev*10+n;
		i=i/10;
	}
	if(code==rev)
	 printf("Palindrome");
	 else 
	   printf("Not palindrome");
	   return 0;
}
