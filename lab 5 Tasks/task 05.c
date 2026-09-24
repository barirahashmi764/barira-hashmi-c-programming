#include<stdio.h> 
int main() {
	int confidence ;
	char usertype ;
	printf("Enter confidence score :\n");
	scanf("%d",&confidence);
	printf("Enter user type(A-authorized,U-unauthorized) :\n");
	scanf(" %c", &usertype);
    if(confidence>= 80){
    	printf("Face Recognition\n");
    	if(usertype=='A')
    	printf("Access granted");
    	else
	     printf("Access denied");
	    }
     else if(confidence >=50)
	      printf("Manual Verification");
	       else if(confidence < 50 && usertype =='U')
                printf("Access denied");

return 0; 

}
