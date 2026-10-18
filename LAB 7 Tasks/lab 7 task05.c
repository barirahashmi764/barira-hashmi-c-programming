
#include <stdio.h>
#include <string.h>

int main() {
    char sentences[3][100];
    int i, j, vowels;
    printf("Enter 3 sentences separated by semicolons:\n");
     for (i = 0; i < 3; i++) {
        scanf(" %99[^;]%*c", sentences[i]);
    }
     for (i = 0; i < 3; i++) {
        vowels = 0;

        for (j = 0; sentences[i][j] != '\0'; j++) {
            if (sentences[i][j] == 'a' ||
                sentences[i][j] == 'e' ||
                sentences[i][j] == 'i' ||
                sentences[i][j] == 'o' ||
                sentences[i][j] == 'u' ||
                sentences[i][j] == 'A' ||
                sentences[i][j] == 'E' ||
                sentences[i][j] == 'I' ||
                sentences[i][j] == 'O' ||
                sentences[i][j] == 'U') {
                vowels++;
            }
        }

        printf("Sentence: %s\n", sentences[i]);
        printf("Number of vowels: %d\n\n", vowels);
    }

    return 0;
}

