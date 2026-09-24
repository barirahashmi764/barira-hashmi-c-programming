#include<stdio.h>
int main(){
    char category,subcategory ;
	printf("enter category (A-animal,V-vehicle,F-food,H-human) :\n");
	scanf(" %c",&category);
	switch(category){
		case  'A' :
		case  'a' :
		    	printf("\nAnimal:\n");
                printf("C - Cat\n");
                printf("D - Dog\n");
                printf("B - Bird\n");
                printf("Enter your choice: ");
                scanf(" %c", &subcategory);
		        switch(subcategory){
		        	case 'C' :
		        	case 'c' :
		        	    printf("You selected: Animal - Cat\n");
                        break;
                    case 'D' :
                    case 'd' :
                       printf("You selected: Animal - Dog\n");
                       break;
                    case 'B' :
                    case 'b' :
                    	printf("You selected: Animal - Bird\n");
                    break;
                    default:
                    printf("Invalid animal choice.");
                 }
                 break ;
        case 'V' :
        case 'v' :
        	printf("\nVehicle:\n");
            printf("C - Car\n");
            printf("B - Bus\n");
            printf("K - Bike\n");
            printf("Enter your choice: ");
            scanf(" %c", &subcategory);
            switch(subcategory){
            	case 'C' :
            	case 'c' :
            		printf("You selected Vehicle - Car ");
            		break;
            	case 'B' :
            	case 'b' :
            		  printf("You selected Vehicle - Bus");
            		  break;
            	case 'K' :
            	case 'k' :
            		printf("You selected Vehicle - Bike");
            		break;
            	default :
            		printf("invalid vehicle choice.");
				
				}
				break;
		case 'F' :
		case 'f' :
			printf("\nFood:\n");
            printf("P - Pizza\n");
            printf("B - Burger\n");
            printf("Y - Biryani\n");
            printf("Enter your choice: ");
            scanf(" %c", &subcategory);
            switch(subcategory){
            	case 'P':
            	case 'p' :
            		printf("You selected Food - Pizza");
            		break;
            	case 'B' :
            	case 'b' :
            		printf("You selected Food - Burger");
            	    break;
            	case 'Y' :
            	case 'y' :
				    printf("You selected Food - Biryani");
				    break ;
				default :
					printf("Invalid food choice");
						}
		                 break;
		case 'H' :
		case 'h' :
			printf("\nHuman:\n");
            printf("M - male\n");
            printf("F - female\n");
            printf("C - child\n");
            printf("Enter your choice: ");
            scanf(" %c", &subcategory);
            switch(subcategory){
            	case 'M' :
            	case 'm' :
            		printf("You selected Human - male");
            		break;
            	case 'F' :
            	case 'f' :
            		printf("You selected Human - female");
            		break;
            	case 'C' :
            	case 'c' :
            		printf("You selected Human - child");
            		break;
            	default :
            		printf("Invalid human choice");
            	}
            	break;
        default :
        	printf("Invalid Category.");
			}
			return 0;
				}
		

