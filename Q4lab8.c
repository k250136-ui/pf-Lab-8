#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    int seats[row][col];
    
    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            seats[i][j] = rand() % 2;
        }
    }
    int count=0;
    int row_index=-1,max=-1;
    for (int i = 0; i < row; i++)
    {
        int empty_count=0;
        for (int j = 0; j < col; j++)
        {
            printf("%d ", seats[i][j]);
            if (seats[i][j]==0)
            {
                count++;
                empty_count++;
            }
            if (empty_count > max)
            {
                max = empty_count;
                row_index = i;
            }   
        }
        printf("\n");
    }
    printf("\nTotal Available seats: %d", count);
    printf("\nMost Empty Seats: %d (in row %d)", max, row_index+1);
    return 0;
}