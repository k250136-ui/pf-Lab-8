#include <stdio.h>

void input(int n, int board[n][n])
{
    printf("Enter the elements of the board (%d x %d):\n", n, n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d", &board[i][j]);
        }
    }
}
void output(int n, int board[n][n])
{
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("    %d ", board[i][j]);
        }
        printf("\n");
    } 
}
void output_rotated(int n, int board[n][n])
{
    printf("------Rotated Board (90 degrees clockwise)-------\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("    %d ", board[n-j-1][i]);
        }
        printf("\n");
    } 
}

int main() 
{
    int n;
    printf("Enter the size of the board (N x N): ");
    scanf("%d", &n);
    int board[n][n];
    input(n, board);
    printf("-------Orignal Board-------------\n");
    output(n, board);
    output_rotated(n, board);
    return 0;
}