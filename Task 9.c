#include<stdio.h>
int main() {
	char productname[50];
	int quantity;
	float price;
	
	printf("enter product name:");
	fgets(productname,50,stdin);
	printf("enter product quantity:");
	scanf("%d",&quantity);
	printf("enter product price:");
	scanf("%f",&price);
	
	printf("\n\nProduct Name:\t%s",productname);
	printf("\nQunatity:\t%d",quantity);
	printf("\n\nPrice:\t%.2f",price);
	
	return 0;
}
