#include<stdio.h>
int CalculateDiscount(char membership,int total){
	float discount=0;
	if(membership=='P'){
		discount = total*0.20;
		}
		else if(membership=='G'){
			discount=total*0.10;
		}
		else {
			discount =total*0.05;
		}

	if(total>10000){
		discount = discount +total*0.02;
	}
	return discount;
}
int CalculateFinalBill(int discounted_amount,int total ){
	float tax=0; 
	float discount_amount;
	float final_bill;
	discount_amount=total -discounted_amount;
	tax=discount_amount*0.15;
	final_bill=discount_amount+tax;
	if(discount_amount<=5000)
	final_bill =final_bill+300;

 return final_bill;	
}
int main(){
	char membership;
	int total_amount,final_amount;
	float discount;
	printf("Enter member ship :\n");
	printf("Platinum - P\n");
	printf("Gold - G\n");
	printf("Standard - S\n");
	scanf("%c",&membership);
	printf("enter total amount :\n");
	scanf("%d",&total_amount);
	discount=CalculateDiscount(membership,total_amount);
	final_amount=CalculateFinalBill(discount,total_amount);
	printf("Disount amount : %.2f\n",discount);
	printf("Final amount : %d\n",final_amount);
	return 0;
}
