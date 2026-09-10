#include<stdio.h>
int main() {
	int data ;
	float basiccost,price, discount,finalcost;
	printf("enter data used in GB:");
	scanf("%d",&data);
	printf("enter price per GB:");
	scanf("%f",&price);
	
	basiccost= data*price;
	
	if(data<50){
		              discount=0;
		              finalcost=basiccost;
	                  printf("basic cost is %.2f\n",basiccost);
	                  printf("discount is %.2f\n",discount);
	                  printf("final cost is %.2f",finalcost);
                 }
     else if(data<100) { 
	        	         discount=basiccost*0.05;
		                 finalcost=basiccost-discount;
	                     printf("basic cost is %.2f\n",basiccost);
	                     printf("discount is %.2f\n",discount);
	                     printf("final cost is %.2f",finalcost);
	                   }
	                    else if(data<200) { 
	        	                               discount=basiccost*0.1;
		                                       finalcost=basiccost-discount;
	                                           printf("basic cost is %.2f\n",basiccost);
	                                           printf("discount is %.2f\n",discount);
	                                           printf("final cost is %.2f",finalcost);
	                                       }
	                                        else if(data>=200) { 
	        	                                                    discount=basiccost*0.15;
		                                                            finalcost=basiccost-discount;
	                                                                printf("basic cost is %.2f\n",basiccost);
	                                                                printf("discount is %.2f\n",discount);
	                                                                printf("final cost is %.2f",finalcost);
	                                                           }
	
	
	return 0 ;
}
