#include<stdio.h>
int main(){
	int image[3][3],row=3,col=3;
	int (*ptr)[3] = image;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("enter pixel for row :%d , col:%d\n",i,j);
			scanf("%d",*(ptr+i) +j);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			*(*(ptr+i)+j) =*(*(ptr+i) +j) * 2;
					}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d,",*(*(ptr + i) + j));
		}
		printf("\n");
}
	
	return 0;
}
