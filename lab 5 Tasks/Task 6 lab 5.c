#include<stdio.h>
int main() {
	char problem , algorithm ;
	printf("---PROBLEM---:\n");
	printf("C - Classification\n");
	printf("R - Regression\n");
	printf("L - Clustering\n");
	printf("V - Computer Vision\n");
	printf("Enter your choice :");
	scanf(" %c", &problem);
	switch(problem){
		case 'C' :
		case 'c' :
			printf("---ALGORITHM---:\n");
			printf("L - Logistic Regression\n");
	        printf("D - Decision Tree\n");
	        printf("K - KNN\n");
	        printf("Enter your choice :");
	        scanf(" %c", &algorithm);
			switch(algorithm){
				case 'L' :
				case 'l' :
					printf("you choose problem - classicafiation and algorithm - Logistic Regression");
					break;
				case 'D' :
				case 'd' :
					printf("you choose problem - classicafiation and algorithm - Decision Tree");
					break;
				case 'K' :
				case 'k' :
					printf("you choose problem - classicafiation and algorithm - KNN");
				default :
					printf("Invalid algorithm selected");
			}
			break;
		case 'R' :
		case 'r' :
			printf("---ALGORITHM---:\n"); 
			printf("L - Linear Regression\n");
	        printf("P - Polynomial Regression\n");
	        printf("S - SVR\n");
	        printf("Enter your choice :");
	        scanf(" %c", &algorithm);
	        switch(algorithm){
	        	case 'L' :
	        	case 'l' :
	        		printf("you choose problem - Regression and algorithm - Linear Regression ");
	        	    break;
	        	case 'P' :
	        	case 'p' :
	        		printf("you choose problem - Regression and algorithm - Polynomial Regression");
	        	    break;
	        	case 'S' :
	        	case 's' :
	        		printf("you choose problem - Regression and algorithm - SVR");
	        		break;
	        	deafult :
	        		printf("Invalid algorithm selected");
			}
			break;
		case 'L' :
		case 'l' :
			printf("---ALGORITHM---:\n"); 
			printf("K - K-Means\n");
	        printf("H - Hierarchical Clustering\n");
	        printf("D - DBSCAN\n");
	        printf("Enter your choice :");
	        scanf(" %c", &algorithm);
	        switch(algorithm){
	        	case 'K' :
	        	case 'k' :
	        		printf("you choose problem - Clustering and algorithm - K-Means");
	        		break;
	        	case 'H' :
	        	case 'h' :
	        		printf("you choose problem - Clustering and algorithm - Hierarchical clustering");
	        		break;
	        	case 'D' :
	        	case 'd' :
	        		printf("you choose problem - Clustering and algorithm - DBSCAN");
	        		break;
	        	default :
	        		printf("Invalid algorithm selected");
			}
			break;
		case 'V' :
		case 'v' :
			printf("---ALGORITHM---:\n");
			printf("C - CNN\n");
	        printf("Y - YOLO\n");
	        printf("R - R-CNN\n");
	        printf("Enter your choice :");
	        scanf(" %c", &algorithm);
	        switch(algorithm){
	        	case 'C' :
	        	case 'c' :
	        		printf("you choose problem - Computer vision and algorithm - CNN");
	        		break;
	        	case 'Y' :
	        	case 'y' :
	        		printf("you choose problem - Computer vision and algorithm - YOLO");
	        		break;
	        	case 'R' :
	        	case 'r' :
	        		printf("you choose problem - Computer vision and algorithm - R-CNN");
	        		break;
	        	default:
	        		printf("Invalid algorithm selected");
			}
			break;
		default :
			printf("Invalid problem type !");
	} 
	return 0;
	  
}
