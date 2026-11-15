#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char names[10][50];
	char temp[50];
	for(i=0;i<10;i++){
		printf("enter your name : \n");
		fgets(names[i],50,stdin);
	}
	printf("\n");
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(strcmp(names[j],names[j+1])>0){
				strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
			}
		}
	}
	printf("Names in Alphabetical Order : \n");
	for(i=0;i<10;i++){
    printf("%s", names[i]);
    }
	return 0;
}
