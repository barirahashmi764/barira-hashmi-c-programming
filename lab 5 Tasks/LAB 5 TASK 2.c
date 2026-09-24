#include<stdio.h>
int main(){
	int age,monthly_income, credit_score ;
	char loan_status;
	printf("enter your age: ");
	scanf("%d",&age);
	printf("enter your monthly income: ");
	scanf("%d",&monthly_income);
	printf("enter your credit score: ");
	scanf("%d",&credit_score);
	printf("enter your existing loan status(Y/N): ");
	scanf(" %c",&loan_status);
	 
	 if(age>=21&&monthly_income>=100000&&credit_score>=750&&loan_status=='N')
	       printf("High Approval Chance");
	    else if(age>=21&&monthly_income>=75000&&credit_score>=650&&loan_status=='Y')
	        printf("Manual Review");
	        else if(age>=21&&monthly_income>= 50000&&credit_score>=600)
	            printf("Possibly Eligible");
	         else 
	           printf("Rejected");
	           
	return 0 ;
	
}
