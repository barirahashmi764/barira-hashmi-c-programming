#include<stdio.h>
#include<math.h>
int main(){
	int num ,P,base,exp;
	char operation;
	float A,C,F,S,num1;
	printf("MATHEMATICAL OPERATIONS :\n");
	printf("S-Square root\n");
	printf("A-Absolute value\n");
	printf("P-Power\n");
	printf("F-Floor\n");
	printf("C-Ceiling\n");
	printf("enter your choice:");
	scanf("%c",&operation);
	switch(operation){
		case 'S' :
		case 's' :
			printf("enter  number to find square root:");
			scanf("%d",&num);
			if(num>=0){
			  S = sqrt(num);
			  printf("The square root of %d is %.2f .",num,S);
			}
			  else{
			  printf("Negative number square root not possible.");
			     } 
			     break;
		case 'P' :
		case 'p' :
			printf("enter base :");
			scanf("%d",&base);
			printf("enter exponent:");
			scanf("%d",&exp);
			P = pow(base,exp);
			printf("The calculated power is %d .",P);
			break;
		case 'A' :
		case 'a' :
			printf("Enter a number to find the absolute value :");
			scanf("%d",&num);
			A = fabs(num);
			printf("The absolute value of %d is %.2f", num,A);
			break;
		case 'F' :
		case 'f' :
			printf("Enter a number :");
			scanf("%f",&num1);
			F = floor(num1);
			printf("The rounded number is %.2f",F);
			break;
		case 'C' :
		case 'c' :
			printf("Enter a number :");
			scanf("%f",&num1);
			C = ceil(num1);
			printf("The rounded number is %.2f",C);
			break;
		default:
			printf("Invalid Operation");
			
	}
	return 0 ;
	
}
