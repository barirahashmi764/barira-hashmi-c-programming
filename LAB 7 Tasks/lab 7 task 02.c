#include <stdio.h>
int main(){
    char logs[3][3][30];
    int count = 0;

    // Input 3 CSV log entries
    for (int i = 0; i < 3; i++){
        printf("Enter log entry %d (username,status,timestamp):\n", i + 1);
        scanf(" %29[^,],%29[^,],%29[^\n]",logs[i][0], logs[i][1], logs[i][2]);
    }
  // Count uppercase letters using nested loops
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; logs[i][j][k] != '\0'; k++)
            {
                if (logs[i][j][k] >= 'A' &&
                    logs[i][j][k] <= 'Z')
                {
                    count++;
                }
            }
        }
    }
    // Display the total count
    printf("\nTotal uppercase letters = %d\n", count);

    return 0;
}
