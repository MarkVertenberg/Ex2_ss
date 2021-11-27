#include <stdio.h>
#include "my_mat.h"

// Copy the matrix to temp for not ruining the original matrix.
void copyMatrix(int temp[N][N], int matrix[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            temp[i][j] = matrix[i][j];
        }
    }
}

int main(){

    int matrix[N][N];   //The original matrix.
    int temp[N][N];     //The temp matrix.
    int i;
    int j;
    char input;
    scanf("%c", &input);

    //Doing commands until gets D.
    while(input != 'D'){
        if(input == 'A'){
            insertToMatrix(matrix);     //Inserting inputs to matrix.
            copyMatrix(temp, matrix);   
            floydWarshallAlgo(temp);    //The copied matrix is going through Floyd-Warshall Algorithm.
        }
        else if(input == 'B'){
            scanf("%d", &i);
            scanf("%d", &j);
            if(isTherePath(i, j, temp)){
                printf("True\n");
            }
            else{
                printf("False\n");
            }
        }
        else if(input == 'C'){
            scanf("%d", &i);
            scanf("%d", &j);
            int ans = shortestPath(i, j, temp);
            printf("%d\n", ans);
        }
        scanf("%c", &input);
    }
    return 0;
}
