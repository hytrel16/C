//Loop Through a 2D Array
#include <stdio.h>
int main(){
    int row, col;
    printf("Number of row :");
    scanf("%d", &row);
    printf("Number of column :");
    scanf("%d", &col);
    int matrix[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter the number [%d][%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix: ");
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
           printf("%d\n", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
   
}
