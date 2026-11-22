#include<stdio.h>
int calculate_checksum(int transaction_id){
	int sum=0,n,temp=0;
	if(transaction_id<10){
		return transaction_id;
	}
	else{
		while(transaction_id!=0){
			   n=transaction_id%10;
		       sum=sum+n;
		       transaction_id=transaction_id/10;
		}
		return calculate_checksum(sum);
	}
			
}
int main(){
	int id,check_sum;
	printf("enter transaction id :\n");
	scanf("%d",&id);
	check_sum=calculate_checksum(id);
	printf("Check sum : %d\n",check_sum);
	return 0;
}
