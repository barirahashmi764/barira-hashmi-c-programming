#include<stdio.h>
#include<string.h>
int main(){
	char word_grid[3][100];
    char words[3][3][100];
    char longest_word[100];
    int i, j, k;
    int length, max_length = 0;
    int row = 0, column = 0;
    for (i = 0; i < 3; i++) {
        printf("Enter three words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }
     for (i = 0; i < 3; i++) {
        j = 0;
        k = 0;
        while (word_grid[i][k] != '\0' && j < 3) {
            int p = 0;
	          while (word_grid[i][k] != ' ' &&
                word_grid[i][k] != '\0') {
                words[i][j][p] = word_grid[i][k];
                p++;
                k++;
            }

            words[i][j][p] = '\0';

            j++;

            if (word_grid[i][k] == ' ') {
                k++;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            length = strlen(words[i][j]);

            if (length > max_length) {
                max_length = length;
                row = i;
                column = j;
                strcpy(longest_word, words[i][j]);
            }
        }
    }
	 
	printf("\nLongest word: %s\n", longest_word);
    printf("Length: %d\n", max_length);
    printf("Row index: %d\n", row);
    printf("Column index: %d\n", column);
	 
	 return 0;
	
}
