#include<stdio.h>
int main(){
	float accuracy;
	int prediction,approvalstatus;
	printf("Enter Model accuracy(%) :");
	scanf("%f",&accuracy);
	printf("Enter Prediction latency (milliseconds):");
	scanf("%d",&prediction);
	printf("Enter Model approval status:");
	scanf("%d",&approvalstatus);
	
	if(approvalstatus<0||approvalstatus>1)
	  printf("invalid approval status");
	else
	    if(accuracy>=90&&prediction<=100&&approvalstatus==1)
	       printf("Modal deployed");
	          else if(accuracy<90)
	                printf("Model not deployed because of low accuracy");
	                   else if(prediction>100)
	                      printf("Model not deployed because Latency too high");
	                          else if(approvalstatus==0)
	                              printf("Model not deployed because Model is not approved");
	                               
	       
 return 0;
}
