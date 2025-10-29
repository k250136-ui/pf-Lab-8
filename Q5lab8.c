#include <stdio.h>

int main() {
    int marks[5][4];  
    float avg[5];    
    int highest[4];

    printf("Enter marks of 5 students in 4 subjects:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += marks[i][j];
        }
        avg[i] = sum / 4.0;
    }


    for (int j = 0; j < 4; j++) {
        highest[j] = marks[0][j]; 
        for (int i = 1; i < 5; i++) {
            if (marks[i][j] > highest[j]) {
                highest[j] = marks[i][j];
            }
        }
    }

    printf("\nAverage marks of each student: [");
    for (int i = 0; i < 5; i++) {
        printf("%.2f", avg[i]);
        if (i < 4) printf(", ");
    }
    printf("]\n");

    printf("Highest marks in each subject: [");
    for (int j = 0; j < 4; j++) {
        printf("%d", highest[j]);
        if (j < 3) printf(", ");
    }
    printf("]\n");
    return 0;
}
