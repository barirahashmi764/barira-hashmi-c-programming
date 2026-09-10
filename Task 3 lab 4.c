#include<stdio.h>
int main(){
	int T_records,m_records,d_records ;
	float per_m_records=0,per_d_records=0;
	printf("enter number of records:");
	scanf("%d",&T_records);
	printf("enter number of missing records:");
	scanf("%d",&m_records);
	printf("enter number of duplicate records:");
	scanf("%d",&d_records);
	
	per_m_records=(m_records*100.0)/T_records;
	per_d_records=(d_records*100.0)/T_records;
	
	if(T_records<=0) 
	 printf("Invalid Dataset.");
	  else if(per_m_records>30)
	      printf("Poor Quality Dataset.");
	       else if(per_m_records<=30&&per_d_records>20)
	          printf("Dataset requires cleaning");
	          else 
	             printf("Dataset ready for training");
	             
 return 0;
	     
	
}
