#include<stdio.h>
struct Item{
	int ID;
	char Name[50];
	int Quantity;
    float Price;
};

int main(){
	int i;
	struct Item Myitems[5];
	for(i=0;i<5;i++){
		printf("enter product id :\n");
		scanf("%d",&Myitems[i].ID);
		printf("enter product name :\n");
		scanf(" %49[^\n]",&Myitems[i].Name);
		printf("enter product quantity :\n");
		scanf("%d",&Myitems[i].Quantity);
		printf("enter product price :\n");
		scanf("%f",&Myitems[i].Price);
	}
	
	for(i=0;i<5;i++){
		printf("product id :%d\n",Myitems[i].ID);
		printf("product name :%s\n",Myitems[i].Name);
		printf("product quantity :%d\n",Myitems[i].Quantity);
		printf("product price :%.2f\n",Myitems[i].Price);
	}
	return 0;
}
