#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int multiply(int a,int b){
	return a * b;
}
int find_max(int a,int b){
	if(a>b)
	  return a;
	  else
	     return b;
}
int compute(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}
int main(){
	int a ,b,sum ,p,max;
	printf("enter a number :\n");
	scanf("%d",&a);
	printf("enter a number :\n");
	scanf("%d",&b);
	
	sum=compute(a,b,add);
	p=compute(a,b,multiply);
	max=compute(a,b,find_max);
	
	printf("Sum = %d\n", sum);
    printf("Product = %d\n",p);
    printf("Maximum = %d\n",max);
	return 0;
}
