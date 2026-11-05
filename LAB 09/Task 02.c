#include<stdio.h>
int withdraw(int *acc_bal,int amount){
   if(amount<=*(acc_bal)){
		return *(acc_bal)=*(acc_bal)-amount;
	}
	else 
	  printf("Transaction Declined:Insufficient Balance\n");
}
int deposit(int * acc_bal,int amount ){
	return *acc_bal= *acc_bal + amount ;
}
int main(){
	int account_balance=100000,amount; 
	char transaction_type;
	int *acc_bal=&account_balance;
	printf("enter transaction type :\n");
	printf("DEBIT - D :\n");
	printf("CREDIT - C :\n");
	scanf("%c",&transaction_type);
	printf("enter amount:\n");
	scanf("%d",&amount);
	if(transaction_type=='D'){
		withdraw(acc_bal,amount);
	}
	else if(transaction_type=='C'){
		account_balance=deposit(acc_bal,amount);
	}
	printf("your account balance is : %d",account_balance);
	return 0;	
}
