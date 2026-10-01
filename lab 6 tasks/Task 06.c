#include<stdio.h>
int main() {
	int e ,n=0 ,count,even =0,odd=0; 
	printf("enter elctricity meter number :");
	scanf("%d",&e);
	while(e>0){
		count =0;
		n=e%10;
		count=count+n;
		if(count%2==0){
		 printf("%d is even\n",count);
		 even++;
	}
		 else{
		   printf("%d is odd\n",count);
		   odd++;
	}
		e =e/10;
	}
 	printf("even numbers count : %d\n",even);
 	printf("odd numbers count : %d",odd);

	   return 0;
}
