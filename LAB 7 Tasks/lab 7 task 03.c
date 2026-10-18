#include <stdio.h>
#include <string.h>
int main() {
    char secret_messages[3][100];
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("Enter message %d in uppercase: ", i + 1);
        scanf(" %99[A-Z ]", secret_messages[i]);
    }
       for (i = 0; i < 3; i++) {
        int spaces = 0;
        int words = 0;

        printf("\nMessage %d: %s\n", i + 1,
               secret_messages[i]);

        for (j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
            }
            else if (j == 0 || secret_messages[i][j - 1] == ' ') {
                words++;
            }
        }

        printf("Total spaces: %d\n", spaces);
        printf("Total words: %d\n", words);
    }

    return 0;
}

