#include<stdio.h>
#include<string.h>
int main(){
	char feedback[50];
	printf("enter your feedback :\n");
	fgets(feedback,50,stdin);
	int length =strlen(feedback);
	printf("Length : %d \n",length-1);
	char source[]= "not good";
	char sub_string[]="bad";
	if(strstr(feedback,sub_string)){
		strcpy(feedback, source);
		printf("Feedback : %s ",feedback);
	}
	else{
		printf("Feedback : %s ",feedback);		
	}
	return 0;
}
