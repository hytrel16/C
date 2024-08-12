//Loop Through a 2D Array
#include <stdio.h>
int main(){
    int row, col;
    printf("Number of row : ");
    scanf("%d", &row);
    printf("Number of column : ");
    scanf("%d", &col);
    int matrix[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the number [%d][%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix: \n");
    for(int i = 0; i < row; i++){
       for(int j = 0; j < col; j++){
           printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}

/*
output:
Number of row : 2
Number of column : 3
Enter the number [0][0] :1
Enter the number [0][1] :2
Enter the number [0][2] :3
Enter the number [1][0] :4
Enter the number [1][1] :5
Enter the number [1][2] :6
The matrix: 
1       2       3

4       5       6
*/
