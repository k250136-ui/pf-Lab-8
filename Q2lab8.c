#include <stdio.h>

int main() {
    char names[5][10]; 

    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d. ", i+1);
        scanf(" %20s", &names[i]);  
    }
    printf("\nStudent Names:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d. \"%s\" \n", i+1, names[i]);
    }
    return 0;
}