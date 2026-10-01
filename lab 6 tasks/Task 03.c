#include <stdio.h>

int main() {
    int present = 0, absent=0;
    int attendance1, attendance2;

    for (int i = 1; i <= 15; i++) {
        printf("Enter attendance for student %d (1=Present, 0=Absent): ", 2*i-1);
        scanf("%d", &attendance1);

        printf("Enter attendance for student %d (1=Present, 0=Absent): ", 2*i);
        scanf("%d", &attendance2);

        if (attendance1 == 1)
            present++;

        if (attendance2 == 1)
            present++;
    }

    absent = 30 - present;

    printf("\nTotal Present = %d\n", present);
    printf("Total Absent = %d\n", absent);

    return 0;
}
