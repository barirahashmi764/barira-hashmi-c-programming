#include<stdio.h>
int main(){
	char student_names[3][50];
	int marks[3][3];
		
	for(int i=0;i<3;i++){
		printf("enter your name :\n");
		scanf(" %49[^\n]",student_names[i]);
	}
	printf("\n");
	for(int i=0;i<3;i++){
		printf("enter marks for %s :\n",student_names[i]);
		for(int j=0;j<3;j++){
			printf("enter subject marks :");
		    scanf("%d",&marks[i][j]);
		    		}
		}
		
		float avg[3];
		for(int i=0;i<3;i++){
			int sum=0;
			for(int j=0;j<3;j++){
				sum = sum+marks[i][j];
			}
			avg[i]= sum/3.0;
		}
	printf("\n--- Student Report ---\n");
	for(int i=0;i<3;i++){
		printf("%s :",student_names[i]);
		for(int j=0;j<3;j++){
		 printf("%d,",marks[i][j]);
		}
		printf("\t%.2f",avg[i]);
		printf("\n");
		}
		
	return 0;
}
