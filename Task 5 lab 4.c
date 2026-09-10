#include<stdio.h>
int main(){
	int role ,status, security ;
	
	printf("enter user role(1-3):");
	scanf("%d",&role);
	printf("enter account status(0-1):");
	scanf("%d",&status);
	printf("enter security level:");
	scanf("%d",&security);
	
	if(status==0)
	  printf("Access Denied(account inactive)");
	  else if(role==1&&security>=3)
	          printf("Admin Access granted");
	          else if(role==2&&security>=2)
	                 printf("Researcher Access granted");
	                 else if(role==3&&security>=1)
	                         printf("Student Access granted");
	                         else 
	                             printf("Access Denied:(");
	                             
 return 0;
	                 
}
