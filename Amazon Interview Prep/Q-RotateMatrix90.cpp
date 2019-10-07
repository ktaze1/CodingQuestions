#include <iostream>

#define N 4


void displayMatrix(int mat[N][N]);

void rotateMatrix(int matrix[][N]);


int main()
{
    int mat[N][N] = 
    { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    }; 

    //temp 1
    //0,0 = 4 oldu
    //4un yeri
    rotateMatrix(mat); 
  
    // Print rotated matrix 
    displayMatrix(mat);
}


void rotateMatrix(int matrix[][N])
{
    for (int row = 0; row < N/2; row++)
    {
        for (int col=row; col < N-row-1; col++)
        {
            int temp = matrix[row][col];

            matrix[row][col] = matrix[col][N-1-row];

            matrix[col][N-1-row] = matrix[N-1-row][N-1-col];

            matrix[N-1-row][N-1-col] = matrix[N-1-col][row];

            matrix[N-1-col][row] = temp;
        }
    }
}

void displayMatrix(int mat[N][N]) 
{ 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
            printf("%2d ", mat[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
} 
  