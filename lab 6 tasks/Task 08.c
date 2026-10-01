#include<stdio.h>

int main() {
	int arr[9] ,i=0,largest, smallest, pos ;
	for(i=0;i<=7;i++){
		printf("enter a number :");
		scanf("%d",&arr[i]);
	}
		for(i=0;i<=7;i++){
		printf("ELEMENT %d : %d\n",i,arr[i]);
	}
	
     largest=arr[0] ;
	 smallest=arr[0];
	  
	  for(i=0;i<8;i++){
	  	if(arr[i]>largest)
	  	  largest=arr[i] ;
	  }
	    for(i=0;i<8;i++){
	  	if(arr[i]<smallest)
	  	  smallest=arr[i] ;
	  }
	  
	    printf("\nTHE GREATEST NUMBER IS %d\n", largest);
        printf("THE SMALLEST NUMBER IS %d\n", smallest);
        int num ;
        printf("enter a number : ");
        scanf("%d",&num);
        
       for(i=0;i<8;i++){
        		if(num==arr[i]) 
        	      printf("The number %d has the index %d \n",arr[i],i);
        	     }
	
	printf("enter a position u want to enter a number : \n");
	scanf("%d",&pos);
	printf("enter the number u want to enter at the position : \n");
	scanf("%d",&num);
    int n =8;
	for(i=n-1;i>=pos;i--){
		arr[i+1] =arr[i];
	}
	arr[pos]=num;
	n=n+1;
	printf("enter a position u want to delete a number : \n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n=n-1;
     
	for(i=0;i<n;i++){
		printf("ELEMENT %d : %d\n",i,arr[i]);
	}
	
	return 0;
}
	
