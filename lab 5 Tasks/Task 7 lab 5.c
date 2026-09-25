#include<stdio.h>
int main(){
	float req_threshold , confidence ;
	printf("Enter required threshold :");
	scanf("%f",&req_threshold);
	printf("Enter confidence :");
	scanf("%f",&confidence);
	if(confidence>=90)
	  printf("Very High");
	  else if(confidence>=75)
	     printf("High");
	     else if(confidence>=50)
	       printf("Moderate");
	       else 
	          printf("Low");
	          
	if(confidence>=req_threshold && confidence>= 50)
	  printf("Accepted");
	  else 
	    printf("Not Accepted");
	    
	    return 0 ;
}
