#include<stdio.h>
int main() {
	char arr[100],temp;
	printf("enter a word :");
	scanf(" %s", arr);
	int length = 0,i,palindrome=1 ;
        
    for(i = 0; arr[i] != '\0'; i++) {
    length++;
        }
      printf("The length of the word is %d\n",length); 
    for(i=0;i<length/2;i++)
    {
    	temp=arr[i];  
        arr[i]=arr[length-1-i];
        arr[length-1-i] =temp;
	}
    printf("the word is %s\n",arr);
       
    for(i=0;i<length/2;i++){
    	if(arr[i]!=arr[length-1-i]){
    		palindrome=0;
    		break;
    		}
	}
	if(palindrome==1)
	  printf("The word is palindrome.\n");
	  else 
	    printf("The word is not plaindrome.\n");
    int vowel=0 ,consonants=0 ;
    for(i=0;i<length;i++){
	 if(arr[i]=='a'|| arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U')
        vowel++;
        else
          consonants++;
     }
     printf("The number of vowels are %d\n",vowel);
     printf("The number of consonants are %d\n",consonants);
	return 0;
	
	
}
