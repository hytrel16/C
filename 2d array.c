#include <stdio.h>
int main(){
   int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   printf("The Matrix: \n");
   for(int i = 0; i < 2; i++){
       for(int j = 0; j < 3; j++){
           printf("%d\t", matrix[i][j]);
       }
       printf("\n\n");
   }
   return 0;
}



/*
Output:
The Matrix: 
1       2       3

4       5       6
   */
