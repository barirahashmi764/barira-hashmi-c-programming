#include<stdio.h>
int main() {
	int p_score ;
	printf("Enter the perfomance score(0-100):");
	scanf("%d",&p_score);
	if(p_score<0||p_score>100)
	  printf("invalid score");
	   else if(p_score<50)
	      printf("Low Confidence");
	        else if(p_score<80)
	           printf("Moderate Confidence");
	            else if(p_score<=100)
	              printf("High confidence");
	              
 return 0;
 
}
