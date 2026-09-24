#include<stdio.h>
int main() {
	char category , subcategory ;
	printf("Conversation:\n");
    printf("G - greeting \n");
    printf("S - Study\n");
    printf("W - Weather\n");
    printf("H - Help \n");
    printf("Enter your choice: ");
    scanf(" %c", &category);
            switch(category){
            	case 'G' :
            	case 'g' :
            		printf("\nGreeting:\n");
                    printf("H - Hello\n");
                    printf("Y - How are you ?\n");
                    printf("G- Goodbye\n");
                    printf("Enter your choice: ");
                    scanf(" %c", &subcategory);
                    switch(subcategory){
                    	case 'H' :
                    	case 'h' :
                    		printf("Hello");
                    		break;
                    	case 'Y' :
                    	case 'y' :
                    		printf("How are you ?");
                    		break;
                    	case 'G' :
                    	case 'g' :
                    		printf("Goodbye");
                    		break;
                    	default :
                    		printf("invalid greeting choice");
					}
					break;
				case 'S' :
				case 's' :
				    printf("\nStudy:\n");
                    printf("P - Programming\n");
                    printf("M - Math \n");
                    printf("A- AI\n");
                    printf("Enter your choice: ");
                    scanf(" %c", &subcategory);
                    switch(subcategory){
                    	case 'P' :
                    	case 'p' :
                    		printf("Study - Programming");
                    		break;
                    	case 'M' :
                    	case 'm' :
                    		printf("Study - Math");
                    		break;
                    	case 'A' :
                    	case 'a' :
                    		printf("Study - AI");
                    		break;
                    	default :
                    		printf("Invalid study choice");
                    			
					}
					break ;
			    case 'W' :
				case 'w' :
					printf("\nWeather:\n");
                    printf("T - Today\n");
                    printf("W - Tomorrow\n");
                    printf("F- Forecast\n");
                    printf("Enter your choice: ");
                    scanf(" %c", &subcategory);
				    switch(subcategory)	{
				    	case 'T' :
				    	case 't' :
				    		printf("Weather - Today");
				    		break;
				    	case 'W' :
				    	case 'w' :
				    		printf("Weather - Tomorrow");
				    		break;
				    	case 'F' :
				    	case 'f' :
				    		printf("Weather - Forecast");
				    		break;
				    	default :
				    		printf("Invalid weather choice");
					}	
			          break;
			    case 'H' :
			    case 'h' :
			    	printf("\nHelp:\n");
                    printf("A - About chatbots\n");
                    printf("C - Commands\n");
                    printf("E - Exit\n");
                    printf("Enter your choice: ");
                    scanf(" %c", &subcategory);
                    switch(subcategory){
                    	case 'A' :
                    	case 'a' :
                    		printf("Help - About chatbot");
                    		break;
                    	case 'C' :
                    	case 'c' :
                    		printf("Help - Commands");
                    		break;
                    	case 'E' :
                    	case 'e' :
                    		printf("Help - Exit");
                    		break;
                    	default :
                    		printf("Invalid help choice");
					}
					break;
				default :
					printf("Invalid conversation");
			}
			return 0;
		}
