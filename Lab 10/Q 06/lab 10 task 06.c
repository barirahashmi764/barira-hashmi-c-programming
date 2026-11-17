#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char username[20],user[20];
	char password[20],pass[20];
	FILE *fptr;
	fptr = fopen("credentials.txt","r");
	if(fptr == NULL){
		printf("error !");
		exit(1);
	}
	printf("enter user name :");
	fgets(username,20,stdin);
	username[strcspn(username, "\n")] = '\0';

	printf("enter password :");
	fgets(password,20,stdin);
	password[strcspn(password, "\n")] = '\0';
	
	fscanf(fptr,"%s %s",user,pass);
	if(strcmp(username,user)==0&&strcmp(password,pass)==0){
		printf("Access granted \n");
		return 0;
	}
	else{
		printf("Access denied \n");
	}
	fclose(fptr);
	
}
