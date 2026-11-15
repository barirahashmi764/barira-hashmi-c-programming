#include<stdio.h>
#include<string.h>
int main(){
    char email[50];
    char a='@';
    char username[50];
    char *ptr;
    int length;
    printf("Enter your email address :\n ");
    fgets(email,50,stdin);
    length=strlen(email);
    if(strchr(email, '@')){
    ptr = strchr(email, '@');
    strcpy(username,ptr+1);
    printf("%s",username);
	}
	else{
		printf("Invalid Email Format\n");
	}

	
 return 0;
}
