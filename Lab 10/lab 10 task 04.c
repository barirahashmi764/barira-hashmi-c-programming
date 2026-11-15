#include<stdio.h>
#include<stdlib.h>
int main(){
	char user_name[50];
	int account_number;
	float withdrawal_amount;
	printf("enter your username :\n");
	fgets(user_name,50,stdin);
	printf("enter your account number :\n");
	scanf("%d",&account_number);
	printf("enter your withdrawal amount :\n");
    scanf("%f",&withdrawal_amount);
	FILE *fptr;
	fptr = fopen("bank_log.txt","a");
	if(fptr == NULL) {
       printf("Error!");
       exit(1);
  }
  
  fprintf(fptr,"Username: %s",user_name);
  fprintf(fptr,"Account Number: %d\n",account_number);
  fprintf(fptr,"Withdrawal Amount: %.2f\n",withdrawal_amount);
  fprintf(fptr,"--------------------\n");
  fclose(fptr);
  
	return 0;
}
