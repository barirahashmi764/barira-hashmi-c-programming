#include<stdio.h>
int main(){
	int permission;
	printf("enter permission value :");
	scanf("%d",&permission);
	if(permission & 1)
	  printf("View Permission\n");
	if(permission & 2)
	        printf("Train permission\n");
    if(permission & 4)
	           printf("Test permission\n");
	if(permission & 8)
	               printf("Deploy\n");
	               
    if( (permission & 2) && (permission & 8) )
      printf("Training and Deployement permission");
      else
        printf("User doesnt have training and deployement permission");
	 return 0;
	
}
