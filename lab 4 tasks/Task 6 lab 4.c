#include<stdio.h>
int main(){
	int obstacle,person,battery;
	printf("Enter obstacle (1 = Yes, 0 = No):");
	scanf("%d",&obstacle);
	printf("Enter person (1 = Yes, 0 = No):");
	scanf("%d",&person);
	printf("Enter battery:");
	scanf("%d",&battery);
	 if(obstacle==1)
	    {
		  if(person==1)
	        printf("Emergency stop");
	             else
	                  printf("Change Direction");
		}
	 else  
	    {
		  if(battery<20) 
		    printf("Return to charging station");
			  else 
			       printf("Continue moving");
	    }
	             
	
	return 0 ;
}
