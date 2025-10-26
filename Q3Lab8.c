#include <stdio.h>

int main() 
{
    char words[3][10];
    int vowel_count = 0;

    printf("Enter three words containing vovel(s)\n");
    for (int i=0;i<3;i++) 
    {
        printf("%d. ", i+1);
        scanf("%9s", words[i]);
    }
    for (int i=0;i<3;i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            char ch = words[i][j];
            if (ch == '\0') 
            {
                break;
            }
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' 
             || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowel_count++;
            }
        }
    }
    printf("Total number of vowels: %d\n", vowel_count);
    return 0;
}