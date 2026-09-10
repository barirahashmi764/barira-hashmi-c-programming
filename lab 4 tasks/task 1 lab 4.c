#include<stdio.h>
int main(){
	int a,b,c ;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	
	if(a>b&&a>c) 
	 printf("The greatest number is %d",a);
	 else if(b>a&&b>c)
	        printf("The greatest number is %d",b);
	        else if(c>a&&c>b)
	             printf("The greatest number is %d",c);
	             else if(a==b&&a>c)
	               printf("%d and %d are equal and the greatest",a,b);
	               else if(a==c&&a>b)
	                      printf("%d and %d are equal and the greatest",a,c);
	                     else if(b==c&&b>a)
	                       printf("%d and %d are equal and the greatest",b,c);
	                          else if(a==b&&b==c)
	                              printf("The numbers are all equal");
	    
	                    
 return 0;
}

