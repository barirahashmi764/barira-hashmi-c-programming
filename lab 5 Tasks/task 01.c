#include<stdio.h>
int main()
{   int prog_marks,Math_marks, AI_marks ;
    float attendance,average ;
    printf("enter programming marks:");
    scanf("%d",&prog_marks);
    printf("enter Mathematics marks:");
    scanf("%d",&Math_marks);
    printf("enter AI marks:");
    scanf("%d",&AI_marks);
    printf("enter attendance:");
    scanf("%f",&attendance);
    if(prog_marks>=50&&Math_marks>=50&&AI_marks>=50&&attendance>=75){
    	average= (prog_marks+Math_marks+AI_marks)/3;
    	 printf("Average:%f\n",average);
    	if(average>=80)
    	  printf("Excellent");
    	   else if(average>=70)
    	     printf("Very Good");
    	      else if(average>=60)
    	       printf("Good");
    	        else if(average>=50)
    	         printf("Satisfactory");
    	           else 
    	              printf("Poor");	              
					  }
    else 
     printf("Student is Not Eligible.");
	return 0;
}
