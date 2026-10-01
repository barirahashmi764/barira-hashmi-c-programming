#include<stdio.h>
int main() {
	int pass ,n=0 ,sum = 0; 
	printf("enter a password (4 charachters)  :");
	scanf("%d",&pass);
	while(pass>0){
		n=pass%10;
		sum=sum+n;
		pass=pass/10;
	}
	printf("SUM=%d\n",sum);
	if(sum>10)
	  printf("STRONG PIN");
	  else
	   printf("WEAK PIN");
	   
	   return 0;
}
