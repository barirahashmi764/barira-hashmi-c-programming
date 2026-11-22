#include<stdio.h>
struct product{
	int id;
	char name[50];
	char category[50];
	float price;
	int available_quantity;
};
void displayProductDetails(struct product p){
	float discount;
	discount=p.price*(5.0/100.0);
    p.price=p.price-discount;
	printf("ID:%d\t,Name:%s\t,Category:%s\t,price:%.2f\t,Available Quantity:%d ",p.id,p.name,p.category,p.price,p.available_quantity);
}
int main(){
	struct product p ={12332,"chocolate","sweets",908.432,80
	};
	displayProductDetails(p);
	return 0;
}
